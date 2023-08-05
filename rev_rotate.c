/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:27:48 by hhino             #+#    #+#             */
/*   Updated: 2023/08/05 15:59:21 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **head, int size)
{
	t_stack	*temp;
	t_stack	*top;
	t_stack	*prelast_node;
	t_stack	*last_node;
	int		i;

	if (size < 2 || head == NULL)
		error_exit("rra");
	top = *head;
	i = 0;
	while ((*head)->next != NULL)
		head = (*head)->next;
	prelast_node = head;
	while ((*head) != NULL)
		head = (*head)->next;
	last_node = head;
	*head = top;

	temp = last_node->next;
	last_node->next = top;
	prelast_node->next = temp;
	*head = last_node;
}

// void	rrb(int *stack_b, int size)
// {
// 	int	temp;
// 	int	i;

// 	if (size < 2)
// 		return ;
// 	temp = stack_b[size - 1];
// 	i = size - 1;
// 	while (i > 0)
// 	{
// 		stack_b[i] = stack_b[i - 1];
// 		i--;
// 	}
// 	stack_b[0] = temp;
// }

// void	rrr(int *stack_a, int *stack_b, int size_a, int size_b)
// {
// 	rra(stack_a, size_a);
// 	rrb(stack_b, size_b);
// }
