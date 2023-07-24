/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:39:22 by hhino             #+#    #+#             */
/*   Updated: 2023/05/30 15:44:11 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			i;

	if (!buf)
		return (NULL);
	p = buf;
	value = (unsigned char)ch;
	i = 0;
	while (i < n)
	{
		p[i] = value;
		i++;
	}
	return (buf);
}
