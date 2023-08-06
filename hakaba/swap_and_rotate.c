/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_and_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:46:25 by hhino             #+#    #+#             */
/*   Updated: 2023/07/23 12:30:41 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_reverse_rotate(int *stack_a, int size_a)
{
	int	temp;
	int	i;

	temp = stack_a[size_a];
	i = size_a;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = temp;
}

void	ft_rotate(int *stack_a, int size_a)
{
	int	temp;
	int	i;

	temp = stack_a[0];
	i = 0;
	while (i < size_a)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[size_a] = temp;
}
