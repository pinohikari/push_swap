/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:25:07 by hhino             #+#    #+#             */
/*   Updated: 2023/08/11 08:56:23 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **head, int size)
{
	t_stack	*top;
	t_stack	*next_node;
	t_stack	*temp;

	if (size < 2 || *head == NULL || (*head)->next == NULL)
		error_exit("sa");
	top = *head;
	next_node = (*head)->next;
	temp = next_node->next;
	next_node->next = top;
	top->next = temp;
	*head = next_node;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack **head, int size)
{
	t_stack	*top;
	t_stack	*next_node;
	t_stack	*temp;

	if (size < 2 || *head == NULL || (*head)->next == NULL)
		error_exit("sb");
	top = *head;
	next_node = (*head)->next;
	temp = next_node->next;
	next_node->next = top;
	top->next = temp;
	*head = next_node;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack **a, t_stack **b, int size_a, int size_b)
{
	sa(a, size_a);
	sb(b, size_b);
	ft_putstr_fd("ss\n", 1);
}
