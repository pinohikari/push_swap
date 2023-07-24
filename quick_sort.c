/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:08:03 by hhino             #+#    #+#             */
/*   Updated: 2023/07/23 12:16:50 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	QuickSort(int A[], int left, int right)
{
	int	pivot;
	int	Left;
	int	Right;

	Left = left;
	Right = right;
	pivot = A[(left + right) / 2];
	while (1)
	{
		while (A[Left] < pivot)
			Left++;
		while (pivot < A[Right])
			Right--;
		if (Left >= Right)
			break ;
		ft_swap(&A[Left], &A[Right]);
		Left++;
		Right--;
	}
	if (left < Left - 1)
		QuickSort(A, left, Left - 1);
	if (Right + 1 < right)
		QuickSort(A, Right + 1, right);
}

int	main(void)
{
	int	stack_a[];
	int	n;

	stack_a[] = {9, 5, 1, 8, 3, 7, 2, 6, 4};
	n = sizeof(stack_a) / sizeof(stack_a[0]);
	printf("Before sorting: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", stack_a[i]);
	}
	printf("\n");
	QuickSort(stack_a, 0, n - 1);
	printf("After sorting: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", stack_a[i]);
	}
	printf("\n");
	return (0);
}
