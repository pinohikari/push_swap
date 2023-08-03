/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:25:40 by hhino             #+#    #+#             */
/*   Updated: 2023/06/07 18:21:45 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	treat_conversion(int c, va_list args)
{
	int	n;

	n = 0;
	if (c == 'c')
		n = treat_char(va_arg(args, int));
	else if (c == 's')
		n = treat_string(va_arg(args, char *));
	else if (c == 'p')
		n = treat_pointer((unsigned long long)va_arg(args, uintptr_t));
	else if (c == 'd' || c == 'i')
		n = treat_int(va_arg(args, int));
	else if (c == 'u')
		n = treat_unsigned_num(va_arg(args, unsigned long long));
	else if (c == 'x')
		n = treat_hexa((unsigned long long)va_arg(args, unsigned int), 0);
	else if (c == 'X')
		n = treat_hexa((unsigned long long)va_arg(args, unsigned int), 1);
	else if (c == '%')
		n = treat_char('%');
	return (n);
}

int	count_output(const char *save, va_list args)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (save[i])
	{
		if (save[i] == '%')
		{
			i++;
			c += treat_conversion(save[i], args);
		}
		else
		{
			ft_putchar_fd(save[i], 1);
			c++;
		}
		i++;
		if (!save[i])
			return (c);
	}
	return (c);
}

int	ft_printf(const char *format, ...)
{
	const char	*save;
	va_list		args;
	int			num;

	num = 0;
	save = ft_strdup(format);
	if (!save)
		return (0);
	va_start(args, format);
	num = count_output(save, args);
	va_end(args);
	free((char *)save);
	return (num);
}
