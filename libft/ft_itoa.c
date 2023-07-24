/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:36:04 by hhino             #+#    #+#             */
/*   Updated: 2023/05/29 13:56:30 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	get_len(long n)
{
	long	len;

	len = 0;
	if (n < 0)
	{
		len = 1;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	len;
	long	num;

	num = (long)n;
	len = get_len(num);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (len >= (num == 0))
	{
		str[len--] = '0' + num % 10;
		num /= 10;
	}
	return (str);
}
