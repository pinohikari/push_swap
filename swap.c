/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:25:07 by hhino             #+#    #+#             */
/*   Updated: 2023/07/23 13:25:36 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

void	sa(int *stack_a, int size)
{
	int	temp;

	// if (size < 2)
	// 	return ;
	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = temp;
}

void	sb(int *stack_b, int size)
{
	int	temp;

	if (size < 2)
		return ;
	temp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = temp;
}

void	ss(int *stack_a, int *stack_b, int size_a, int size_b)
{
	sa(stack_a, size_a);
	sb(stack_b, size_b);
}
