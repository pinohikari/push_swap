/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:27:15 by hhino             #+#    #+#             */
/*   Updated: 2023/08/03 16:56:28 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_stack	*create_list(void)
// {
// 	t_stack	*head;

// 	head = malloc(sizeof(t_stack));
// 	if (!head)
// 		error_exit("malloc");
// 	head->value = 0;
// 	head->next = head;
// 	return (head);
// }

t_stack	*create_node(int data)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		error_exit("malloc");
	node->data = data;
	node->next = NULL;
	return (node);
}

void	push_back(t_stack **head, int data)
{
	t_stack	*new_node;
	t_stack	*current;

	new_node = create_node(data);
	if (new_node == NULL)
		error_exit("malloc");
	if (*head == NULL)
	{
		*head = new_node;
		return ;
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
}

void	free_list(t_stack *head)
{
	t_stack	*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
