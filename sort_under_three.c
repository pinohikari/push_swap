/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:19:20 by hhino             #+#    #+#             */
/*   Updated: 2023/08/11 08:55:15 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **top, int size)
{
	if ((*top)->data > (*top)->next->data)
		sa(top, size);
	else
		error_exit("sorted");
}

void	sort_three(t_stack **top, int size)
{
	int	first;
	int	second;
	int	third;

	first = (*top)->data;
	second = (*top)->next->data;
	third = (*top)->next->next->data;
	if (first <third &&third < second) /*1, 3, 2*/
	{
		rra(top, size);
		sa(top, size);
	}
	if (second < first && first <third) /*2, 1, 3*/
		sa(top, size);
	if (third < first && first < second) /*2, 3, 1 */
		rra(top, size);
	if (second <third &&third < first) /*3, 1, 2*/
		ra(top, size);
	if (third < second && second < first) /*3, 2, 1*/
	{
		ra(top, size);
		sa(top, size);
	}
}

// int	*sort_three(int *stack_a)
// {
// 	if (stack_a[0] < stack_a[2] && stack_a[2] < stack_a[1]) /*1, 3, 2*/
// 	{
// 		ft_reverse_rotate(stack_a, 2);
// 		ft_swap(&stack_a[0], &stack_a[1]);
// 	}
// 	if (stack_a[1] < stack_a[0] && stack_a[0] < stack_a[2]) /*2, 1, 3*/
// 		ft_swap(&stack_a[0], &stack_a[1]);
// 	if (stack_a[2] < stack_a[0] && stack_a[0] < stack_a[1]) /*2, 3, 1 */
// 		ft_reverse_rotate(stack_a, 2);
// 	if (stack_a[1] < stack_a[2] && stack_a[2] < stack_a[0]) /*3, 1, 2*/
// 		ft_rotate(stack_a, 2);
// 	if (stack_a[2] < stack_a[1] && stack_a[1] < stack_a[0]) /*3, 2, 1*/
// 	{
// 		ft_rotate(stack_a, 2);
// 		ft_swap(&stack_a[0], &stack_a[1]);
// 	}
// 	return (stack_a);
// }

// int	main(void)
// {
// 	int	stack_a1[2] = {3, 1};
// 	int	stack_a2[3] = {1, -3, -2};

// 	printf("Before sorting: ");
// 	for (int i = 0; i < 2; i++)
// 	{
// 		printf("%d ", stack_a1[i]);
// 	}
// 	printf("\n");
// 	sort_two(stack_a1);
// 	printf("After sorting: ");
// 	for (int i = 0; i < 2; i++)
// 	{
// 		printf("%d ", stack_a1[i]);
// 	}
// 	printf("\n");
// 	printf("Before sorting: ");
// 	for (int i = 0; i < 3; i++)
// 	{
// 		printf("%d ", stack_a2[i]);
// 	}
// 	printf("\n");
// 	sort_three(stack_a2);
// 	printf("After sorting: ");
// 	for (int i = 0; i < 3; i++)
// 	{
// 		printf("%d ", stack_a2[i]);
// 	}
// 	printf("\n");
// 	return (0);
// }
