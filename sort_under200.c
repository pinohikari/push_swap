/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under200.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:41:56 by hhino             #+#    #+#             */
/*   Updated: 2023/08/09 18:49:48 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_under200(t_stack **a, t_stack **b, int size)
{
	int	pb_count;
	int	i;
	int	pivot;

	pivot = size / 5;
	i = 1;
	pb_count = 0;
	while (i <= 5)
	{
		while (pb_count < (pivot * i) - 1)
		{
			if ((*a)->rank >= pivot * i)
				ra(a, size - pb_count);
			if ((*a)->rank < pivot * i)
			{
				pb(a, b, size - pb_count, pb_count);
				pb_count++;
				if ((*b)->rank < pivot * (i - 1) + (pivot / 2))
					rb(b, pb_count);
			}
		}
		i++;
	}
	return ;
}

	// while (size - pb_count > 3)
	// {
	// 	pb(a, b, size - pb_count, pb_count);
	// 	pb_count++;
	// }


	//sizeを5分割し、4つpivotを設ける
	//１/４以下をpb、それ以外はra
	//pbの後その上下を判断し、上半分の値だったら下へ
	//2/4以下をpb、それ以外はra
	//
	//
	//
	//
	//
	//
