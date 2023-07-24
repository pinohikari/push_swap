/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:26:07 by hhino             #+#    #+#             */
/*   Updated: 2023/07/23 13:25:43 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

void	pa(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	int	i;

	if (*size_b == 0)
		return ;
	stack_a[*size_a] = stack_b[0];
	(*size_a)++;
	(*size_b)--;
	i++;
	i = 0;
	while (i < *size_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
}

void	pb(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	int	i;

	if (*size_a == 0)
		return ;
	stack_b[*size_b] = stack_a[0];
	(*size_b)++;
	(*size_a)--;
	i = 0;
	while (i < *size_a)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
}
