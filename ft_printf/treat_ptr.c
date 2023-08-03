/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:51:55 by hhino             #+#    #+#             */
/*   Updated: 2023/06/07 18:23:01 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static size_t	get_len(unsigned long long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

static char	*change_base(unsigned long long us, char *r, int c)
{
	if (us == 0)
	{
		r[0] = '0';
		c++;
	}
	while (us != 0)
	{
		if ((us % 16) < 10)
			r[c - 1] = (us % 16) + '0';
		else
			r[c - 1] = ((us % 16) - 10) + 'a';
		us /= 16;
		c--;
	}
	return (r);
}

int	treat_pointer(unsigned long long i)
{
	char	*hexanum;
	size_t	len;

	len = 0;
	len = get_len((long long)i);
	hexanum = (char *)malloc(sizeof(char) * (len + 3));
	if (hexanum == NULL)
		return (-1);
	hexanum[0] = '0';
	hexanum[1] = 'x';
	hexanum[len + 2] = '\0';
	change_base(i, &hexanum[2], len);
	ft_putstr_fd(hexanum, 1);
	free (hexanum);
	return (len + 2);
}
