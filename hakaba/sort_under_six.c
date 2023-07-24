/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_six.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:59:53 by hhino             #+#    #+#             */
/*   Updated: 2023/06/30 20:53:16 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushAtoB(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	if (*size_a > 0)
	{
		stack_b[*size_b] = stack_a[*size_a - 1];
		(*size_a)--;
		(*size_b)++;
	}
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

int	*find_smallestnumber(const int *arr, int size)
{
	int	*smallest;
	int	i;

	i = 1;
	smallest = arr[0];
	while (i < size)
	{
		if (arr[i] < smallest)
			smallest = arr[i];
		i++;
	}
	return (smallest);
}

int	*sort_under_six(int *stack_a, int *stack_b, int size_a)
{
	int	size_b;
	int	minsize_a;
	int	minvalue;
	int	i;

	i = 0;
	while (size_a >= 3)
	{
		stack_a[i] = find_smallestnumber(stack_a, size_a);
		while (i != 1)
			ft_reverse_rotate(stack_a, size_a);
	}
	sort_three(stack_a);
	pushBtoA(stack_a, stack_b, size_a, size_b);
	pushBtoA(stack_a, stack_b, size_a, size_b);
	return (stack_a)
}



int	*sort_under_six(int *stack_a, int *stack_b, int size_a)
{
	int	size_b;
	int	min_index;
	int	min_value;

	size_b = 0;
	while (size_a > 3)
	{
		min_index = 0;
		min_value = stack_a[0];
		for (int i = 1; i < size_a; i++)
		{
			if (stack_a[i] < min_value)
			{
				min_value = stack_a[i];
				min_index = i;
			}
		}
		while (min_index != 1)
		{
			ft_reverse_rotate(stack_a, size_a);
			min_index = (min_index - 1 + size_a) % size_a;
		}
		pushBtoA(stack_a, stack_b, &size_a, &size_b);
	}
	sort_three(stack_a);
	while (size_b > 0)
		pushBtoA(stack_a, stack_b, &size_a, &size_b);
	return (stack_a);
}


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
// 				ft_rotate(stack_a, size_a - 1);
// 		}
// 		else
// 		{
// 			for (int i = 0; i < size_a - minsize_a; i++)
// 				ft_reverse_rotate(stack_a, size_a - 1);
// 		}
// 		// スタックAから最小値をポップし、スタックBにプッシュ
// 		pushAtoB(stack_a, stack_b, &size_a, &size_b);
// 	}
// 	// スタックBからスタックAに要素を戻す
// 	while (size_b > 0)
// 		pushBtoA(stack_a, stack_b, &size_a, &size_b);
// }

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
	sortStack(stack_a, stack_b, size_a);
	printf("\nAfter sorting:\n");
	printf("Stack A: ");
	for (int i = 0; i < size_a; i++)
		printf("%d ", stack_a[i]);
	printf("\n");
	printf("Stack B: (empty)\n");
	return (0);
}
