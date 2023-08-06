/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under200.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:41:56 by hhino             #+#    #+#             */
/*   Updated: 2023/08/06 18:09:31 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_under200(t_info *info, t_stack **a, t_stack **b, int size)
{
	int	pb_count;
	int	i;

	pb_count = 0;
	i = 1;
	while (i < 4)
	{
		while (pb_count < (size / 5) * i)
		{
			if ((*a)->rank > (size / 5) * i)
				ra(a, size - pb_count);
			if ((*a)->rank < (size / 5) * i)
			{
				pb(a, b, size - pb_count, pb_count);
				pb_count++;
			}
		}
		i++;
	}
}

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