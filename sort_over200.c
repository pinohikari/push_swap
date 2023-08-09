/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over200.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 20:06:38 by hhino             #+#    #+#             */
/*   Updated: 2023/08/09 20:20:51 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_over200(t_stack **a, t_stack **b, int size)
{
	int	pb_count;
	int	i;
	int	pivot;

	pivot = size / 10;
	i = 1;
	pb_count = 0;
	while (i <= 10)
	{
		while (pb_count < (pivot * i) - 1)
		{
			if ((*a)->rank >= pivot * i)
				ra(a, size - pb_count);
			if ((*a)->rank < pivot * i)
			{
				pb(a, b, size - pb_count, pb_count);
				pb_count++;
				if (pb_count > 2 && (*b)->rank < pivot * (i - 1) + (pivot / 2))
					rb(b, pb_count);
			}
		}
		i++;
	}
	i = 1;
	while (pb_count > 0)
	{
		if ((*b)->rank == size - i)
		{
			pa(a, b, size - pb_count, pb_count);
			i++;
			pb_count--;
		}
		else
			rb(b, pb_count);
	}
	return ;
}
