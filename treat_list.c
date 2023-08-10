/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:38:01 by hhino             #+#    #+#             */
/*   Updated: 2023/08/10 20:25:06 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacklast(t_stack *lst)
{
	t_stack	*dest;

	if (!lst)
		error_exit("stacklast");
	dest = lst;
	while (dest->next != NULL)
		dest = dest->next;
	return (dest);
}

t_stack	*ft_stackprelast(t_stack *lst)
{
	t_stack	*dest;

	if (!lst)
		error_exit("stackprelast");
	dest = lst;
	while (dest->next->next != NULL)
		dest = dest->next;
	return (dest);
}

int	search_stack_rank(t_stack *lst, int rank)
{
	int		place;
	t_stack	*dest;

	place = 1;
	if (!lst)
		error_exit("search_stack_rank");
	dest = lst;
	while (dest->rank != rank)
	{
		dest = dest->next;
		place++;
	}
	return (place);
}
