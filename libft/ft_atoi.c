/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:38:35 by hhino             #+#    #+#             */
/*   Updated: 2023/05/29 13:54:02 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ov_check(long long n, const char *str, size_t i, int f)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (n != 0 && n > LLONG_MAX / 10)
		{
			if (f == 0)
				return (-1);
			if (f == 1)
				return (0);
		}
		if (n != 0 && n == LLONG_MAX / 10)
		{
			if (f == 0 && str[i] >= '8')
				return (-1);
			if (f == 1 && str[i] > '8')
				return (0);
		}
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	long	re;
	int		sign_flag;

	i = 0;
	sign_flag = 0;
	re = 0;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		sign_flag = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	re = ov_check(re, str, i, sign_flag);
	if (sign_flag == 1)
		return ((int)-re);
	return ((int)re);
}
