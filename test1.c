/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:50:14 by hhino             #+#    #+#             */
/*   Updated: 2023/06/30 20:52:24 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_reverse_rotate(int *arr, int size)
{
	int	temp;

	temp = arr[size - 1];
	for (int i = size - 1; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = temp;
}

void	pushBtoA(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	if (*size_b > 0)
	{
		stack_a[*size_a] = stack_b[*size_b - 1];
		(*size_a)++;
		(*size_b)--;
	}
}

void	sort_three(int *arr)
{
	if (arr[0] < arr[2] && arr[2] < arr[1]) /*1, 3, 2*/
	{
		ft_reverse_rotate(arr, 3);
		ft_swap(&arr[0], &arr[1]);
	}
	if (arr[1] < arr[0] && arr[0] < arr[2]) /*2, 1, 3*/
		ft_swap(&arr[0], &arr[1]);
	if (arr[2] < arr[0] && arr[0] < arr[1]) /*2, 3, 1 */
		ft_reverse_rotate(arr, 3);
	if (arr[1] < arr[2] && arr[2] < arr[0]) /*3, 1, 2*/
		ft_reverse_rotate(arr, 3);
	if (arr[2] < arr[1] && arr[1] < arr[0]) /*3, 2, 1*/
	{
		ft_reverse_rotate(arr, 3);
		ft_swap(&arr[0], &arr[1]);
	}
}

int	find_smallest_number(int *arr, int size)
{
	int	smallest;

	smallest = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
		}
	}
	return (smallest);
}



int	main(void)
{
	int	size_a;
	int	stack_a[];
	int	stack_b[size_a];

	stack_a[] = {9, 4, 7, 2, 5, 1};
	size_a = sizeof(stack_a) / sizeof(stack_a[0]);
	printf("Before sorting:\n");
	printf("Stack A: ");
	for (int i = 0; i < size_a; i++)
		printf("%d ", stack_a[i]);
	printf("\n");
	printf("Stack B: (empty)\n");
	sort_under_six(stack_a, stack_b, size_a);
	printf("\nAfter sorting:\n");
	printf("Stack A: ");
	for (int i = 0; i < size_a; i++)
		printf("%d ", stack_a[i]);
	printf("\n");
	printf("Stack B: (empty)\n");
	return (0);
}
