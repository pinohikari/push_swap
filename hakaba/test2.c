/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:56:53 by hhino             #+#    #+#             */
/*   Updated: 2023/07/01 11:37:28 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	merge(int arr[], int left[], int leftSize, int right[], int rightSize)
{
	int i, j, k;
	i = 0, j = 0, k = 0;
	while (i < leftSize && j < rightSize)
	{
		if (left[i] <= right[j])
		{
			arr[k] = left[i];
			i++;
		}
		else
		{
			arr[k] = right[j];
			j++;
		}
		k++;
	}
	while (i < leftSize)
	{
		arr[k] = left[i];
		i++;
		k++;
	}
	while (j < rightSize)
	{
		arr[k] = right[j];
		j++;
		k++;
	}
}

void	mergeSort(int arr[], int size)
{
	int	mid;
	int	*left;
	int	*right;

	if (size <= 1)
	{
		return ;
	}
	mid = size / 2;
	left = (int *)malloc(mid * sizeof(int));
	right = (int *)malloc((size - mid) * sizeof(int));
	for (int i = 0; i < mid; i++)
	{
		left[i] = arr[i];
	}
	for (int i = mid; i < size; i++)
	{
		right[i - mid] = arr[i];
	}
	mergeSort(left, mid);
	mergeSort(right, size - mid);
	merge(arr, left, mid, right, size - mid);
	free(left);
	free(right);
}

int	main(void)
{
	int	arr[];
	int	size;

	arr[] = {6, 2, 9, 1, 5, 3};
	size = sizeof(arr) / sizeof(arr[0]);
	printf("Before sorting: ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	mergeSort(arr, size);
	printf("\nAfter sorting: ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	return (0);
}
