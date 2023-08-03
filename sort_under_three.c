/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:19:20 by hhino             #+#    #+#             */
/*   Updated: 2023/07/23 12:58:50 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sort_two(int *stack_a)
{
	if (stack_a[0] > stack_a[1])
		sa(stack_a, 2);
	return (stack_a);
}

int	*sort_three(int *stack_a)
{
	if (stack_a[0] < stack_a[2] && stack_a[2] < stack_a[1]) /*1, 3, 2*/
	{
		rra(stack_a, 3);
		sa(stack_a, 3);
	}
	if (stack_a[1] < stack_a[0] && stack_a[0] < stack_a[2]) /*2, 1, 3*/
		sa(stack_a, 3);
	if (stack_a[2] < stack_a[0] && stack_a[0] < stack_a[1]) /*2, 3, 1 */
		rra(stack_a, 3);
	if (stack_a[1] < stack_a[2] && stack_a[2] < stack_a[0]) /*3, 1, 2*/
		ra(stack_a, 3);
	if (stack_a[2] < stack_a[1] && stack_a[1] < stack_a[0]) /*3, 2, 1*/
	{
		ra(stack_a, 3);
		sa(stack_a, 3);
	}
	return (stack_a);
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

int	main(void)
{
	int	stack_a1[2] = {3, 1};
	int	stack_a2[3] = {1, -3, -2};

	printf("Before sorting: ");
	for (int i = 0; i < 2; i++)
	{
		printf("%d ", stack_a1[i]);
	}
	printf("\n");
	sort_two(stack_a1);
	printf("After sorting: ");
	for (int i = 0; i < 2; i++)
	{
		printf("%d ", stack_a1[i]);
	}
	printf("\n");
	printf("Before sorting: ");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", stack_a2[i]);
	}
	printf("\n");
	sort_three(stack_a2);
	printf("After sorting: ");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", stack_a2[i]);
	}
	printf("\n");
	return (0);
}