/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:27:48 by hhino             #+#    #+#             */
/*   Updated: 2023/08/11 08:54:19 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **head, int size)
{
	t_stack	*temp;
	t_stack	*top;
	t_stack	*prelast_node;
	t_stack	*last_node;

	if (size < 2 || head == NULL)
		error_exit("rra");
	top = *head;
	while ((*head)->next->next != NULL)
		*head = (*head)->next;
	prelast_node = *head;
	while ((*head)->next != NULL)
		*head = (*head)->next;
	last_node = *head;
	*head = top;
	temp = last_node->next;
	last_node->next = top;
	prelast_node->next = temp;
	*head = last_node;
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack **head, int size)
{
	t_stack	*temp;
	t_stack	*top;
	t_stack	*prelast_node;
	t_stack	*last_node;

	if (size < 2 || head == NULL)
		error_exit("rra");
	top = *head;
	while ((*head)->next->next != NULL)
		*head = (*head)->next;
	prelast_node = *head;
	while ((*head)->next != NULL)
		*head = (*head)->next;
	last_node = *head;
	*head = top;
	temp = last_node->next;
	last_node->next = top;
	prelast_node->next = temp;
	*head = last_node;
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack **a, t_stack **b, int size_a, int size_b)
{
	rra(a, size_a);
	rrb(b, size_b);
	ft_putstr_fd("rrr\n", 1);
}
