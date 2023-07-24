/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:39:33 by hhino             #+#    #+#             */
/*   Updated: 2023/05/29 17:46:55 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *s, size_t len)
{
	size_t	n;

	n = 0;
	while (s && s[n] && n < len)
		n++;
	return (n);
}

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strnlen(dest, destsize);
	srclen = ft_strlen(src);
	i = 0;
	if (destsize <= destlen)
		return (srclen + destsize);
	while (src[i] != '\0' && (i + destlen) < (destsize - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (srclen + destlen);
}
