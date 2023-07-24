/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:27:03 by hhino             #+#    #+#             */
/*   Updated: 2023/07/23 13:25:40 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

void	ra(int *stack_a, int size)
{
	int	temp;
	int	i;

	// if (size < 2)
	// 	return ;
	temp = stack_a[0];
	i = 0;
	while (i < size - 1)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[size - 1] = temp;
}

void	rb(int *stack_b, int size)
{
	int	temp;
	int	i;

	if (size < 2)
		return ;
	temp = stack_b[0];
	i = 0;
	while (i < size - 1)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[size - 1] = temp;
}

void	rr(int *stack_a, int *stack_b, int size_a, int size_b)
{
	ra(stack_a, size_a);
	rb(stack_b, size_b);
}
