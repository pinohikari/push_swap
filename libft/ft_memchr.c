/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:39:02 by hhino             #+#    #+#             */
/*   Updated: 2023/05/30 15:46:17 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;
	size_t				i;

	if (!s)
		return (NULL);
	i = 0;
	ptr = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == ch)
		{
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
