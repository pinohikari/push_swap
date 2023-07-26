/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:27:15 by hhino             #+#    #+#             */
/*   Updated: 2023/07/26 17:27:18 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_stack
{
	int				value;
	int				data;
	int				rank;
	struct s_stack	*next;
}					t_stack;

t_stack	*create_list(void)
{
	t_stack	*head;

	head = malloc(sizeof(t_stack));
	if (!head)
		error_exit("malloc");
	head->value = 0;
	head->next = head;
	return (head);
}

