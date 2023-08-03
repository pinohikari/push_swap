/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:58:55 by hhino             #+#    #+#             */
/*   Updated: 2023/06/07 18:22:11 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static size_t	get_len(long long n);
static char		*change_base(unsigned long long us, char *r, int c);
static char		*ft_upper_str(char *c);
int				treat_hexa(unsigned long long i, unsigned int flag);

static size_t	get_len(long long n)
{
	size_t	len;

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

static char	*ft_upper_str(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		c[i] = ft_toupper(c[i]);
		i++;
	}
	return (c);
}

int	treat_hexa(unsigned long long i, unsigned int flag)
{
	char	*hexanum;
	size_t	len;

	len = get_len((long long)i);
	hexanum = (char *)malloc(sizeof(char) * (len + 1));
	if (hexanum == NULL)
		return (-1);
	hexanum[len] = '\0';
	change_base(i, &hexanum[0], len);
	if (flag == 1)
		ft_upper_str(hexanum);
	ft_putstr_fd(hexanum, 1);
	free (hexanum);
	return (len);
}
