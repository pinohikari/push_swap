/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:26:07 by hhino             #+#    #+#             */
/*   Updated: 2023/08/06 16:49:45 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack **a, t_stack **b, int size_a, int size_b)
{
	t_stack	*new_a_top;
	t_stack	*new_b_top;

	(void)size_b;
	if (size_a < 1 || *a == NULL)
		error_exit("pb");
	new_a_top = (*a)->next;
	new_b_top = (*a);
	new_b_top->next = (*b);
	*b = new_b_top;
	*a = new_a_top;
	ft_putstr_fd("pb\n", 1);
}

void	pa(t_stack **a, t_stack **b, int size_a, int size_b)
{
	t_stack	*new_a_top;
	t_stack	*new_b_top;

	(void)size_a;
	if (size_b < 1 || *b == NULL)
		error_exit("pa");
	new_b_top = (*b)->next;
	new_a_top = (*b);
	new_a_top->next = (*a);
	*b = new_b_top;
	*a = new_a_top;
	ft_putstr_fd("pa\n", 1);
}

// void	pb(int *stack_a, int *stack_b, int *size_a, int *size_b)
// {
// 	int	i;

// 	if (*size_a == 0)
// 		return ;
// 	stack_b[*size_b] = stack_a[0];
// 	(*size_b)++;
// 	(*size_a)--;
// 	i = 0;
// 	while (i < *size_a)
// 	{
// 		stack_a[i] = stack_a[i + 1];
// 		i++;
// 	}
// }
