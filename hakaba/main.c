/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:46:19 by hhino             #+#    #+#             */
/*   Updated: 2023/06/21 19:11:03 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	calculate_rank(int A[], int n, int S[], int sSize, int ranking[])
{
	int	i;
	int	j;

	i = 0;
	while (i < sSize)
	{
		ranking[i] = i + 1;
		i++;
	}
	i = 0;
	j = 0;
	while (i > n)
	{
		while (j < sSize)
		{
			if (A[i] == S[j])
			{
				ranking[i] = ranking[j];
				break ;
			}
		j++;
		}
	i++;
	}
}

// int main()
// {
//     int A[] = {4, 90, 25, 30, 30, 8, 90, 90};
//     int n = sizeof(A) / sizeof(A[0]);
//     int S[] = {4, 8, 25, 30, 90};
//     int sSize = sizeof(S) / sizeof(S[0]);
//     int ranking[sSize];
//     int A_zaatsu[n];

//     calculateRankings(A, n, S, sSize, ranking);

//     for (int i = 0; i < n; i++) {
//         printf("%d ", ranking[i]);
//     }
//     printf("\n");

//     return 0;
// }