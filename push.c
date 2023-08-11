/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:26:07 by hhino             #+#    #+#             */
/*   Updated: 2023/08/11 08:52:28 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_to_b_over200(t_stack **a, t_stack **b, int size, int pivot)
{
	int	pb_count;
	int	i;

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
	return (pb_count);
}

int	push_to_b(t_stack **a, t_stack **b, int size, int pivot)
{
	int	pb_count;
	int	i;

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
				if (pb_count > 2 && (*b)->rank < pivot * (i - 1) + (pivot / 2))
					rb(b, pb_count);
			}
		}
		i++;
	}
	return (pb_count);
}

void	push_to_a(t_stack **a, t_stack **b, int size, int pb_count)
{
	int	i;
	int	j;

	i = 1;
	while (pb_count > 0)
	{
		if ((*b)->rank == size - i)
		{
			pa(a, b, size - pb_count, pb_count);
			i++;
			pb_count--;
		}
		else if ((*b)->next->rank == size - i)
			sb(b, pb_count);
		else if (ft_stacklast(*b)->rank == size - i)
			rrb(b, pb_count);
		else if (search_stack_rank(*b, size - i) > (pb_count / 2))
		{
			j = 0;
			while (j < pb_count - search_stack_rank(*b, size - i))
			{
				rrb(b, pb_count);
				j++;
			}
		}
		else
			rb(b, pb_count);
	}
}

void	pb(t_stack **a, t_stack **b, int size_a, int size_b)
{
	t_stack	*new_a_top;
	t_stack	*new_b_top;

	(void)size_b;
	if (size_a < 1 || *a == NULL)
		error_exit("pb");
	new_a_top = (*a)->next;
	new_b_top = (*a);
	new_b_top->next = (*b);
	*b = new_b_top;
	*a = new_a_top;
	ft_putstr_fd("pb\n", 1);
}

void	pa(t_stack **a, t_stack **b, int size_a, int size_b)
{
	t_stack	*new_a_top;
	t_stack	*new_b_top;

	(void)size_a;
	if (size_b < 1 || *b == NULL)
		error_exit("pa");
	new_b_top = (*b)->next;
	new_a_top = (*b);
	new_a_top->next = (*a);
	*b = new_b_top;
	*a = new_a_top;
	ft_putstr_fd("pa\n", 1);
}
