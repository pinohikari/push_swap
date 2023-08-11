/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:51:17 by hhino             #+#    #+#             */
/*   Updated: 2023/08/11 08:53:38 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_rank(int *intarr, int size, int i)
{
	int	rank;
	int	target_value;
	int	j;

	rank = 1;
	target_value = intarr[i];
	j = 0;
	while (j < size)
	{
		if (intarr[j] < target_value)
			rank++;
		if (j != i && intarr[j] == target_value)
			error_exit("equivalent value\n");
		j++;
	}
	return (rank);
}

void	check_already_sorted(t_stack *head)
{
	int	flag;

	flag = 1;
	if (head == NULL)
		error_exit("check_already_sorted");
	while (head->next != NULL)
	{
		if (head->rank > head->next->rank)
			flag = 0;
		head = head->next;
	}
	if (flag != 0)
		error_exit("sorted"); //size = 1 でもこのエラーになる
}
