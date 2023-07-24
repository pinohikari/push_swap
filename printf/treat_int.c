/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:57:00 by hhino             #+#    #+#             */
/*   Updated: 2023/06/07 18:13:32 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static size_t	get_len(long long n);
int				treat_int(int i);
static void		ft_putunnbr_fd(unsigned int n, int fd);
int				treat_unsigned_num(unsigned int i);

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
		n = n / 10;
		len++;
	}
	return (len);
}

int	treat_int(int i)
{
	size_t	n;

	ft_putnbr_fd(i, 1);
	n = get_len(i);
	return (n);
}

static void	ft_putunnbr_fd(unsigned int n, int fd)
{
	unsigned long long	num;

	num = (unsigned long long)n;
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd(num % 10 + '0', fd);
}

int	treat_unsigned_num(unsigned int i)
{
	size_t	n;

	ft_putunnbr_fd(i, 1);
	n = get_len(i);
	return (n);
}
