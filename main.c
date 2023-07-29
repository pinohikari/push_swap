/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:14:13 by hhino             #+#    #+#             */
/*   Updated: 2023/07/29 20:04:06 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int **arr, int size)
{
	int	i;

	i = 0;
	ft_listnew();
	while (i < size)
	{
		ft_list_addback();
		i++;
	}
	//配列の数字をinfoの中のs_stack->aに入れる
	//循環リストにする
	//sizeによって使う関数に振り分ける
}


int	main(int argc, char **argv)
{
	char	**str;
	int		i;
	int		**arr;
	t_info	info;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			str_isdigit(argv[i]);
			get_num(argv[1]);
			i++;
		}
		info.size = i;
		push_swap(arr, i);
	}
	if (argc == 1)
		return (0);
	return (0);
}

