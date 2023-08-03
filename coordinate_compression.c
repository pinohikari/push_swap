/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:51:17 by hhino             #+#    #+#             */
/*   Updated: 2023/08/03 19:02:32 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	coordinate_compression(int *arr, int size)
{
	int	i;
	int	j;
	int	rank;

	rank = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[i] > arr[j])
				rank++;
			if (arr[i] == arr[j])
				error_exit("equivalent value");
			j++;
		}
		i++;
	}
	return (rank);
}

// void	coordinate_compression(t_info *info)
// {
// 	t_stack	**array;
// 	t_stack	*current;
// 	t_stack	*temp;
// 	int		compressed_value;
// 	int		rank;
// 	int		i;
// 	int		j;

// 	array = (t_stack **)malloc((n + 1) * sizeof(t_stack *));
// 	if (!array)
// 		error_exit("malloc");
// 	current = list;
// 	i = 0;
// 	while (i < n) // iじゃなくてlistになるまで
// 	{
// 		array[i] = current;
// 		// prinf("%d", current->data);
// 		current = current->next;
// 		i++;
// 	}
// 	i = 0;
// 	j = 0;
// 	while (i < n - 1)
// 	{
// 		while (j < n - i - 1)
// 		{
// 			if (array[j]->data > array[j + 1]->data)
// 			{
// 				temp = array[j];
// 				array[j] = array[j + 1];
// 				array[j + 1] = temp;
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	compressed_value = array[0]->data;
// 	rank = 0;
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (array[i]->data != compressed_value)
// 		{
// 			compressed_value = array[i]->data;
// 			rank++;
// 		}
// 		array[i]->rank = rank;
// 		i++;
// 		rank++;
// 	}
// 	free(array);
// }

//
	//////////////////////////////////////////////////////////////////////////////////

// void	sort_ascending_order(t_stack **list, int n)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (i < n)
// 	{
// 		j = 0;
// 		while (j < n - i - 1)
// 		{
// 			if (list->data > list->next->data)
// 				ft_swap(&list, &list);
// 			if (list->data == list->next->data)
// 				error_exit("equivalent value");
// 			j++;
// 		}
// 		i++;
// 	}
// }

// void	coordinate_compression(t_stack **list, int n)
// {
// 	int	**arr;
// 	int	arr_rank;
// 	int	i;

// 	arr = malloc(sizeof(t_stack) * (n + 1));
// 	if (!arr)
// 		error_exit("malloc");
// 	sort_ascending_order(list, n);
// 	arr_rank = 0;
// 	while (arr_rank < n - 1)
// 	{
// 		list->rank = arr_rank;
// 		arr_rank++;
// 	}
// 	free(arr);
// }

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
