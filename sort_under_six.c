/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_six.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:21:29 by hhino             #+#    #+#             */
/*   Updated: 2023/08/06 15:51:58 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack **a, t_stack **b, int size);
void	sort_four(t_stack **a, t_stack **b, int size);

void	sort_under_five(t_info *info, int size)
{
	if (size == 1)
		error_exit("one arg");
	if (size == 2)
		sort_two(&info->a, size);
	if (size == 3)
		sort_three(&info->a, size);
	if (size == 4)
		sort_four(&info->a, &info->b, size);
	if (size == 5)
		sort_five(&info->a, &info->b, size);
}

void	sort_four(t_stack **a, t_stack **b, int size)
{
	int	pb_count;

	pb_count = 0;
	while (pb_count < 1)
	{
		if ((*a)->rank != 1)
			ra(a, size);
		if ((*a)->rank == 1)
		{
			pb(a, b, size, 0);
			pb_count++;
		}
	}
	sort_three(a, 3);
	pa(a, b, 3, 1);
}

void	sort_five(t_stack **a, t_stack **b, int size)
{
	int	i;

	i = size;
	while (i > 3)
	{
		if ((*a)->rank != 1 && (*a)->rank != 2)
			ra(a, size);
		if ((*a)->rank == 1 || (*a)->rank == 2)
		{
			pb(a, b, i, size - i);
			i--;
		}
	}
	sort_three(a, i);
	if ((*b)->rank < (*b)->next->rank)
		sb(b, 2);
	pa(a, b, 3, 2);
	pa(a, b, 4, 1);
}
