/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_char_and_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:22:51 by hhino             #+#    #+#             */
/*   Updated: 2023/06/06 19:53:59 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	treat_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	treat_string(char *str)
{
	int	n;

	if (!str)
		str = "(null)";
	n = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (n);
}
