/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under200.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:41:56 by hhino             #+#    #+#             */
/*   Updated: 2023/08/11 08:55:25 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_under200(t_stack **a, t_stack **b, int size)
{
	int	pb_count;
	int	pivot;

	pivot = size / 5;
	pb_count = push_to_b(a, b, size, pivot);
	push_to_a(a, b, size, pb_count);
	return ;
}

// void	sort_under200(t_stack **a, t_stack **b, int size)
// {
// 	int	pb_count;
// 	int	i;
// 	int	j;
// 	int	pivot;

// 	pivot = size / 5;
// 	i = 1;
// 	pb_count = 0;
// 	while (i <= 5)
// 	{
// 		while (pb_count < (pivot * i) - 1)
// 		{
// 			if ((*a)->rank >= pivot * i)
// 				ra(a, size - pb_count);
// 			if ((*a)->rank < pivot * i)
// 			{
// 				pb(a, b, size - pb_count, pb_count);
// 				pb_count++;
// 				if (pb_count > 2 && (*b)->rank < pivot * (i - 1) + (pivot / 2))
// 					rb(b, pb_count);
// 			}
// 		}
// 		i++;
// 	}
// 	i = 1;
// 	while (pb_count > 0)
// 	{
// 		if ((*b)->rank == size - i)
// 		{
// 			pa(a, b, size - pb_count, pb_count);
// 			i++;
// 			pb_count--;
// 		}
// 		else if ((*b)->next->rank == size - i)
// 			sb(b, pb_count);
// 		else if (ft_stacklast(*b)->rank == size - i)
// 			rrb(b, pb_count);
// 		else if (ft_stackprelast(*b)->rank == size - i)
// 		{
// 			rrb(b, pb_count);
// 			rrb(b, pb_count);
// 		}
// 		else if (search_stack_rank(*b, size - i) > (pb_count / 2))
// 		{
// 			j = 0;
// 			while (j < pb_count - search_stack_rank(*b, size - i))
// 			{
// 				rrb(b, pb_count);
// 				j++;
// 			}
// 		}
// 		else
// 			rb(b, pb_count);
// 	}
// 	return ;
// }

// void	sort_under200(t_stack **a, t_stack **b, int size)
// {
// 	int	pb_count;
// 	int	i;
// 	int	pivot;

// 	pivot = size / 5;
// 	i = 1;
// 	pb_count = 0;
// 	while (i <= 5)
// 	{
// 		while (pb_count < (pivot * i) - 1)
// 		{
// 			if ((*a)->rank >= pivot * i)
// 				ra(a, size - pb_count);
// 			if ((*a)->rank < pivot * i)
// 			{
// 				pb(a, b, size - pb_count, pb_count);
// 				pb_count++;
// 				if ((*b)->rank < pivot * (i - 1) + (pivot / 2))
// 					rb(b, pb_count);
// 			}
// 		}
// 		i++;
// 	}
// 	return ;
// }

// while (size - pb_count > 3)
// {
// 	pb(a, b, size - pb_count, pb_count);
// 	pb_count++;
// }
