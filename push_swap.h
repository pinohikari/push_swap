/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 19:40:23 by hhino             #+#    #+#             */
/*   Updated: 2023/07/24 19:52:00 by hhino            ###   ########.fr       */
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
}					t_stack;

void						ft_swap(int *a, int *b);
void						ft_reverse_rotate(int *stack_a, int size_a);
void						ft_rotate(int *stack_a, int size_a);

int							*sort_two(int *stack_a);
int							*sort_three(int *stack_a);

//error
void						error_exit(char *str);

#endif
