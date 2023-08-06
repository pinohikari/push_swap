/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:20:16 by hhino             #+#    #+#             */
/*   Updated: 2023/07/23 12:16:19 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*push_swap(int argc, char *argv[])
{
	int	*stack_a;

	stack_a = argvtoi(argc, argv);
	if (argc == 1)
		*stack_a = 1;
	if (argc == 2)
		*stack_a = sort_two(stack_a);
	if (argc == 3)
		*stack_a = sort_three(stack_a);
	if (4 <= argc && argc <= 6)
		*stack_a = sort_under_six(stack_a);
	if (argc > 6)
		*stack_a = QuickSort(stack_a);
	return (*stack_a);
	free(stack_a);
}

int	*argvtoi(int argc, char *argv[])
{
	int	i;
	int	*stack_a;

	stack_a = malloc(argc * sizeof(int));
	if (!stack_a)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		stack_a[i] = atoi(argv[i + 1]);
		i++;
	}
	return (stack_a);
}

int	main(int argc, char *argv[])
{
}
