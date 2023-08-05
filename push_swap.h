/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 19:40:23 by hhino             #+#    #+#             */
/*   Updated: 2023/08/05 15:58:18 by hhino            ###   ########.fr       */
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

void						ft_swap(int *a, int *b);
void						ft_reverse_rotate(int *stack_a, int size_a);
void						ft_rotate(int *stack_a, int size_a);

//create_node
t_stack						*create_node(int data);
void						push_back(t_stack **head, int data);
void						free_list(t_stack *head);

//error
void						error_exit(char *str);

//treat_digit
void						str_isdigit(char *str, int argc);
int							*get_num(char *str);
int							ft_atoi(char *str);

int							search_rank(int *arr, int size, int i);

//swap
void						sa(t_stack **top, int size);
//rotate
void						ra(t_stack **head, int size);
void						rra(t_stack **head, int size);

void						sort_under_six(t_info *info, int size);
void						sort_two(t_stack **top, int size);
void						sort_three(t_stack **top, int size);

#endif
