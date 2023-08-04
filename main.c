/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:14:13 by hhino             #+#    #+#             */
/*   Updated: 2023/08/04 18:25:08 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		*intarr;
	t_info	info;
	t_stack	*top;

	info.a = NULL;
	info.size = 0;
	if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			str_isdigit(argv[i], argc);
			i++;
		}
		if (argc == 2)
			intarr = get_num(argv[1]);
		if (argc > 2)
		{
			i = 0;
			intarr = malloc(sizeof(int) * (argc - 1));
			if (intarr == NULL)
				error_exit("malloc");
			while (argv[i + 1] != '\0')
			{
				intarr[i] = ft_atoi(argv[i + 1]);
				i++;
			}
			intarr[i] = '\0';
		}
		i = 0;
		while (intarr[i] != '\0')
		{
			push_back(&(info.a), intarr[i]);
			i++;
		}
		info.size = i;
		top = info.a;
		i = 0;
		while (info.a != NULL)
		{
			info.a->rank = search_rank(intarr, info.size, i);
			// printf("data:%d\trank:%d\ti:%d\n", info.a->data, info.a->rank, i);
			info.a = info.a->next;
			i++;
		}
		free (intarr);
		if (info.size <= 6)
			sort_under_six(info, top, info.size);
		if (info.size > 6 && info.size <= 200)
			sort_under200(info, top, info.size);
		if (info.size > 200)
			sort_over200(info, top, info.size);
	}
	if (argc == 1)
		return (0);
	free_list(top);
}

// __attribute__((destructor)) static void destructor()
// {
//     system("leaks -q push_swap");
// }

// int	main(int argc, char **argv)
// {
// 	int		i;
// 	int		*intarr;
// 	t_info	info;

// 	info.a = NULL;
// 	info.size = 0;
// 	if (argc >= 2)
// 	{
// 		i = 1;
// 		while (i < argc)
// 		{
// 			str_isdigit(argv[i], argc);
// 			i++;
// 		}
// 		if (argc == 2)
// 		{
// 			intarr = get_num(argv[1]);
// 			if (intarr != NULL)
// 			{
// 				i = 0;
// 				while (intarr[i] != '\0')
// 				{
// 					push_back(&(info.a), intarr[i]);
// 					i++;
// 				}
// 				info.size = i;
// 				while (info.a != NULL)
// 				{
// 					info.a->rank = coordinate_compression(intarr, info.size);
// 					printf("data:%d, rank:%d, i:%d\n", info.a->data, info.a->rank, info.size);
// 					info.a = info.a->next;
// 				}
// 				free(intarr);
// 			}
// 		}
// 		if (argc > 2)
// 		{
// 			i = 1;
// 			while (argv[i] != NULL)
// 			{
// 				push_back(&(info.a), ft_atoi(argv[i]));
// 				i++;
// 			}
// 			info.size = i - 1;
// 		}
// 		// i = 0;
// 		// while (info.a != NULL)
// 		// {
// 		// 	printf("data:%d, rank:%d, i:%d\n", info.a->data, info.a->rank, i);
// 		// 	info.a = info.a->next;
// 		// 	i++;
// 		// }
// 	}
// 	if (argc == 1)
// 		return (0);
// 	free_list(info.a);
// }

// int	main(int argc, char **argv)
// {
// 	int		i;
// 	int		*intarr;
// 	t_info	info;

// 	if (argc >= 2)
// 	{
// 		i = 1;
// 		while (i < argc)
// 		{
// 			str_isdigit(argv[i]);
// 			i++;
// 		}
// 		if (argc == 2)
// 		{

// 			intarr = get_num(argv[1]);
// 		//	intarrを構造体infoの*aのdataに入れ線形リストにする
// 		//	free(intarr);
// 		}
// 		if (argc > 2)
// 		{
// 			//ft_atoi(argv[i])をして構造体infoの*aのdataに入れ線形リストにする
// 		}
// 	//	push_swap(info);
// 	}
// 	if (argc == 1)
// 		return (0);
// 	return (0);
// }

// void	push_swap(int **arr, int size)
// {
// 	int	i;

// 	i = 0;
// 	ft_listnew();
// 	while (i < size)
// 	{
// 		ft_list_addback();
// 		i++;
// 	}
// 	//配列の数字をinfoの中のs_stack->aに入れる
// 	//循環リストにする
// 	//sizeによって使う関数に振り分ける
// }
