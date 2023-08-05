/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:27:03 by hhino             #+#    #+#             */
/*   Updated: 2023/08/05 16:01:38 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **head, int size)
{
	t_stack	*top;
	t_stack	*last_node;
	t_stack	*temp;

	if (size < 2 || *head == NULL)
		error_exit("ra");
	top = *head;
	while (head != NULL)
		head = (*head)->next;
	last_node = *head;
	*head = top;

	temp = last_node->next;
	last_node->next = top;
	top->next = temp;
	*head = (*head)->next;
}

// void	rb(int **head, int size)
// {
// 	int	temp;
// 	int	i;

// 	if (size < 2)
// 		return ;
// 	temp = stack_b[0];
// 	i = 0;
// 	while (i < size - 1)
// 	{
// 		stack_b[i] = stack_b[i + 1];
// 		i++;
// 	}
// 	stack_b[size - 1] = temp;
// }

// void	rr(int *stack_a, int *stack_b, int size_a, int size_b)
// {
// 	ra(stack_a, size_a);
// 	rb(stack_b, size_b);
// }
