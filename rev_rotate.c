/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:27:48 by hhino             #+#    #+#             */
/*   Updated: 2023/07/23 13:25:46 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

void	rra(int *stack_a, int size)
{
	int	temp;
	int	i;

	// if (size < 2)
	// 	return ;
	temp = stack_a[size - 1];
	i = size - 1;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = temp;
}

void	rrb(int *stack_b, int size)
{
	int	temp;
	int	i;

	if (size < 2)
		return ;
	temp = stack_b[size - 1];
	i = size - 1;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = temp;
}

void	rrr(int *stack_a, int *stack_b, int size_a, int size_b)
{
	rra(stack_a, size_a);
	rrb(stack_b, size_b);
}
