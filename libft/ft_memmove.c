/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:39:13 by hhino             #+#    #+#             */
/*   Updated: 2023/05/29 13:56:49 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destptr;
	const unsigned char	*srcptr;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	srcptr = (const unsigned char *)src;
	destptr = (unsigned char *)dest;
	i = n;
	if (destptr > srcptr && destptr < srcptr + n)
	{
		while (i > 0)
		{
			destptr[i - 1] = srcptr[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(destptr, srcptr, n);
	return (dest);
}
