/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 19:40:23 by hhino             #+#    #+#             */
/*   Updated: 2023/08/06 17:40:44 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_info
{
	struct s_stack	*a;
	struct s_stack	*b;
	int				size;
	int				pivot[5];
}					t_info;

typedef struct s_stack
{
	int				data;
	int				rank;
	struct s_stack	*next;
	// struct s_stack	*prev;
}					t_stack;

void			ft_swap(int *a, int *b);
void			ft_reverse_rotate(int *stack_a, int size_a);
void			ft_rotate(int *stack_a, int size_a);

//create_node
t_stack			*create_node(int data);
void			push_back(t_stack **head, int data);
void			free_list(t_stack *head);

//error
void			error_exit(char *str);

//treat_digit
void			str_isdigit(char *str, int argc);
int				*get_num(char *str, t_info *info);
int				ft_atoi(char *str);

int				search_rank(int *arr, int size, int i);
void			check_already_sorted(t_stack *head);

//swap
void			sa(t_stack **top, int size);
void			sb(t_stack **head, int size);
void			ss(t_stack **a, t_stack **b, int size_a, int size_b);

//rotate
void			ra(t_stack **head, int size);
void			rb(t_stack **head, int size);
void			rr(t_stack **a, t_stack **b, int size_a, int size_b);

//rev_rotate
void			rra(t_stack **head, int size);
void			rrb(t_stack **head, int size);
void			rrr(t_stack **a, t_stack **b, int size_a, int size_b);

//push
void			pa(t_stack **a, t_stack **b, int size_a, int size_b);
void			pb(t_stack **a, t_stack **b, int size_a, int size_b);

void			sort_under_five(t_info *info, int size);
void			sort_two(t_stack **top, int size);
void			sort_three(t_stack **top, int size);
void			sort_four(t_stack **a, t_stack **b, int size);
void			sort_five(t_stack **a, t_stack **b, int size);

void			sort_under200(t_info *info, t_stack **a, t_stack **b, int size);

#endif
