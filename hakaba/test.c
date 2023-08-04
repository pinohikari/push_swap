/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:01:09 by hhino             #+#    #+#             */
/*   Updated: 2023/07/24 19:36:03 by hhino            ###   ########.fr       */
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
	int	arr_rank;
	int	i;

	array = (int *)malloc(n * sizeof(int));
	if (!array)
		error_exit("malloc");
	copy_list_to_array(list, array, n);
	sort_ascending_order(array, n);
	arr_rank = 0;
	i = 0;
	while (i < n)
	{
		list->rank = arr_rank;
		list = list->next;
		i++;
		arr_rank++;
	}
	free(array);
}


// #include <stdio.h>
// #include <stdlib.h>

// typedef struct s_stack
// {
// 	int				data;
// 	int				rank;
// 	struct s_stack	*next;
// }					t_stack;

// // 線形リストから配列に要素をコピーする関数
// void	copy_list_to_array(t_stack *list, int *array, int n)
// {
// 	int	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		array[i] = list->data;
// 		list = list->next;
// 		i++;
// 	}
// }

// void	sort_ascending_order(int *array, int n)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (i < n)
// 	{
// 		j = 0;
// 		while (j < n - i - 1)
// 		{
// 			if (array[j] > array[j + 1])
// 				ft_swap(&array[j], &array[j + 1]);
// 			if (array[j] == array[j + 1])
// 				error_exit("equivalent value");
// 			j++;
// 		}
// 		i++;
// 	}
// }

// void	coordinate_compression(t_stack *list, int n)
// {
// 	int	*array;
// 	int	compressedvalue;
// 	int	rank;
// 	int	i;

// 	array = (int *)malloc(n * sizeof(int));
// 	if (!array)
// 		error_exit("malloc");
// 	copy_list_to_array(list, array, n);
// 	sort_ascending_order(array, n);
// 	compressedvalue = array[0];
// 	rank = 0;
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (array[i] != compressedvalue)
// 		{
// 			compressedvalue = array[i];
// 			rank++;
// 		}
// 		list->rank = rank;
// 		list = list->next;
// 		i++;
// 	}
// 	free(array);
// }

// 座標圧縮を行う関数
// void	coordinate_compression(t_stack *list, int n)
// {
// 	int	*array;
// 	int	compressedvalue;
// 	int	rank;
// 	int	i;

// 	array = (int *)malloc(n * sizeof(int));
// 	if (!array)
// 		error_exit("malloc");
// 	// 線形リストから配列に要素をコピー
// 	copy_list_to_array(list, array, n);
// 	// 配列を昇順にソート
// 	qsort(array, n, sizeof(int), compare);
// 	// 重複を除去して座標圧縮
// 	compressedvalue = array[0];
// 	rank = 0;
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (array[i] != compressedvalue)
// 		{
// 			compressedvalue = array[i];
// 			rank++;
// 		}
// 		// 元の線形リストの該当する要素にrankを格納
// 		list->rank = rank;
// 		list = list->next;
// 		i++;
// 	}
// 	free(array);
// }

int	main(void)
{
	// 線形リストを生成（適切なコードがあると仮定）
	// 例: t_stack *myList = createList();
	// 座標圧縮を行う
	// 例: coordinateCompression(myList, n);
	// 座標圧縮された結果を使用して何かを行う（例えば出力するなど）
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	*coordinateCompression(int arr[], int n)
// {
// 	int	temp;
// 	int	*compressed;
// 	int	index;

// 	// 与えられた整数列を昇順にソートする（必要な場合）
// 	// ここではバブルソートを使用しますが、他のソートアルゴリズムを使っても良いです。
// 	for (int i = 0; i < n - 1; i++)
// 	{
// 		for (int j = 0; j < n - i - 1; j++)
// 		{
// 			if (arr[j] > arr[j + 1])
// 			{
// 				temp = arr[j];
// 				arr[j] = arr[j + 1];
// 				arr[j + 1] = temp;
// 			}
// 		}
// 	}
// 	// 重複を除去して、座標圧縮を行う配列を生成
// 	compressed = (int *)malloc(n * sizeof(int));
// 	index = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		if (i == 0 || arr[i] != arr[i - 1])
// 		{
// 			compressed[index++] = arr[i];
// 		}
// 	}
// 	return (compressed);
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
// 	compressedArray = coordinateCompression(array, n);
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

// void	radixSort(int *stack_a, int *stack_b, int size_a)
// {
// 	int	maxElement;
// 	int	numDigits;
// 	int	divisor;
// 	int	digit;

// 	maxElement = 0;
// 	for (int i = 0; i < size_a; i++)
// 	{
// 		if (stack_a[i] > maxElement)
// 			maxElement = stack_a[i];
// 	}
// 	numDigits = 0;
// 	while (maxElement > 0)
// 	{
// 		maxElement /= 10;
// 		numDigits++;
// 	}
// 	divisor = 1;
// 	for (int i = 0; i < numDigits; i++)
// 	{
// 		int count[10] = {0}; // 各桁のカウント配列
// 		// スタックAの要素を各桁で分類
// 		for (int j = 0; j < size_a; j++)
// 		{
// 			digit = (stack_a[j] / divisor) % 10;
// 			count[digit]++;
// 		}
// 		// スタックAの要素をスタックBに移動
// 		for (int j = size_a - 1; j >= 0; j--)
// 		{
// 			digit = (stack_a[j] / divisor) % 10;
// 			stack_b[count[digit] - 1] = stack_a[j];
// 			count[digit]--;
// 		}
// 		// スタックBの要素をスタックAに移動
// 		for (int j = 0; j < size_a; j++)
// 			stack_a[j] = stack_b[j];
// 		// 桁を更新
// 		divisor *= 10;
// 	}
// }

// int	main(void)
// {
// 	int	size_a;

// 	int stack_a[] = {43, 17, 35, 92, 81, 62}; // ランダムな整数が格納されたスタックA
// 	size_a = sizeof(stack_a) / sizeof(stack_a[0]);
// 	int stack_b[size_a]; // スタックB
// 	printf("Before sorting:\n");
// 	printf("Stack A: ");
// 	for (int i = 0; i < size_a; i++)
// 		printf("%d ", stack_a[i]);
// 	printf("\n");
// 	printf("Stack B: (empty)\n");
// 	radixSort(stack_a, stack_b, size_a);
// 	printf("\nAfter sorting:\n");
// 	printf("Stack A: ");
// 	for (int i = 0; i < size_a; i++)
// 		printf("%d ", stack_a[i]);
// 	printf("\n");
// 	printf("Stack B: (empty)\n");
// 	return (0);
// }

/////////////////////////////////////////////////
// スタック表示関数

// void	displayStack(int *stack, int size)
// {
// 	for (int i = 0; i < size; i++)
// 		printf("%d ", stack[i]);
// 	printf("\n");
// }

// // スタックAの昇順ソート関数

// void	sortStack(int *stack_a, int *stack_b, int size_a)
// {
// 	int	size_b;
// 	int	minsize_a;
// 	int	minvalue;

// 	size_b = 0;
// 	while (size_a > 0)
// 	{
// 		minsize_a = 0;
// 		minvalue = stack_a[0];
// 		// スタックAから最小値を探索
// 		for (int i = 1; i < size_a; i++)
// 		{
// 			if (stack_a[i] < minvalue)
// 			{
// 				minsize_a = i;
// 				minvalue = stack_a[i];
// 			}
// 		}
// 		// スタックAの要素を昇順にソートするための操作を決定
// 		if (minsize_a <= size_a / 2)
// 		{
// 			for (int i = 0; i < minsize_a; i++)
// 				ra(stack_a, size_a);
// 		}
// 		else
// 		{
// 			for (int i = 0; i < size_a - minsize_a; i++)
// 				rra(stack_a, size_a);
// 		}
// 		// スタックAから最小値をポップし、スタックBにプッシュ
// 		pa(stack_a, stack_b, &size_a, &size_b);
// 	}
// 	// スタックBからスタックAに要素を戻す
// 	while (size_b > 0)
// 		pb(stack_a, stack_b, &size_a, &size_b);
// }

// int	main(void)
// {
// 	int	size_a;

// 	int stack_a[] = {5, 2, 9, 1, 7}; // ランダムな整数が格納されたスタックA
// 	size_a = sizeof(stack_a) / sizeof(stack_a[0]);
// 	int stack_b[size_a]; // スタックB
// 	printf("Before sorting:\n");
// 	printf("Stack A: ");
// 	displayStack(stack_a, size_a);
// 	printf("Stack B: (empty)\n");
// 	sortStack(stack_a, stack_b, size_a);
// 	printf("\nAfter sorting:\n");
// 	printf("Stack A: ");
// 	displayStack(stack_a, size_a);
// 	printf("Stack B: (empty)\n");
// 	return (0);
// }
