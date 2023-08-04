/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:25:07 by hhino             #+#    #+#             */
/*   Updated: 2023/08/04 19:25:55 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **head, int size)
{
	t_stack	*top;
	t_stack	*next_node;

	if (size < 2 || *head == NULL || (*head)->next == NULL)
		error_exit("sa");
	top = *head;
	next_node = top->next;
	top->next = next_node->next;
	next_node->next = top;
	*head = next_node;
	ft_putstr_fd("sa\n", 1);
}


// void	sa(t_stack *top, int size)
// {
// 	t_stack	*temp;

// 	if (size < 2)
// 		return ;
// 	temp = top;
// 	top = top->next;
// 	top->next = temp;
// 	ft_putstr_fd("sa\n", 1);
// }

// void	sb(int *stack_b, int size)
// {
// 	int	temp;

// 	temp = stack_b[0];
// 	stack_b[0] = stack_b[1];
// 	stack_b[1] = temp;
// 	ft_putstr_fd("sb\n", 1);
// }

// void	ss(int *stack_a, int *stack_b, int size_a, int size_b)
// {
// 	sa(stack_a, size_a);
// 	sb(stack_b, size_b);
// 	ft_putstr_fd("ss\n", 1);
// }


//配列ver.
// void	sa(int *stack_a, int size)
// {
// 	int	temp;

// 	if (size < 2)
// 		return ;
// 	temp = stack_a[0];
// 	stack_a[0] = stack_a[1];
// 	stack_a[1] = temp;
// 	ft_putstr_fd("sa", 1);
// }

// void	sb(int *stack_b, int size)
// {
// 	int	temp;

// 	temp = stack_b[0];
// 	stack_b[0] = stack_b[1];
// 	stack_b[1] = temp;
// 	ft_putstr_fd("sb", 1);
// }

// void	ss(int *stack_a, int *stack_b, int size_a, int size_b)
// {
// 	sa(stack_a, size_a);
// 	sb(stack_b, size_b);
// 	ft_putstr_fd("ss", 1);
// }
