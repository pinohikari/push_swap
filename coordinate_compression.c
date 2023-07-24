/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:51:17 by hhino             #+#    #+#             */
/*   Updated: 2023/07/24 19:59:03 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// 線形リストから配列に要素をコピーする関数
void	copy_list_to_array(t_stack *list, int *array, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		array[i] = list->data;
		list = list->next;
		i++;
	}
}

void	sort_ascending_order(int *array, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (array[j] > array[j + 1])
				ft_swap(&array[j], &array[j + 1]);
			if (array[j] == array[j + 1])
				error_exit("equivalent value");
			j++;
		}
		i++;
	}
}

void	coordinate_compression(t_stack *list, int n)
{
	int	*array;
	int	compressedvalue;
	int	arr_rank;
	int	i;

	array = (int *)malloc(n * sizeof(int));
	if (!array)
		error_exit("malloc");
	copy_list_to_array(list, array, n);
	sort_ascending_order(array, n);
	compressedvalue = array[0];
	arr_rank = 0;
	i = 0;
	while (i < n)
	{
		list->rank = arr_rank;
		list = list->next;
		i++;
	}
	free(array);
}

// int	*coordinate_compression(int arr[], int n)
// {
// 	int	*ans;
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (i < n)
// 	{
// 		j = 0;
// 		while (j < n - i - 1)
// 		{
// 			if (arr[j] > arr[j + 1])
// 				ft_swap(&arr[j], &arr[j + 1]);
// 			if (arr[j] == arr[j + 1])
// 				error_exit("equivalent value");
// 			j++;
// 		}
// 		i++;
// 	}
// 	ans = (int *)malloc(n * sizeof(int));
// 	i = 0;
// 	j = 0;
// 	while (i < n)
// 		ans[j++] = arr[i++];
// 	return (ans);
// }

// int	main(void)
// {
// 	int	n;
// 	int	*array;
// 	int	*compressedArray;

// 	printf("配列の要素数を入力してください: ");
// 	scanf("%d", &n);
// 	array = (int *)malloc(n * sizeof(int));
// 	printf("整数を入力してください:\n");
// 	for (int i = 0; i < n; i++)
// 	{
// 		scanf("%d", &array[i]);
// 	}
// 	compressedArray = coordinate_compression(array, n);
// 	printf("座標圧縮後の配列: ");
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d ", compressedArray[i]);
// 	}
// 	printf("\n");
// 	free(array);
// 	free(compressedArray);
// 	return (0);
// }
