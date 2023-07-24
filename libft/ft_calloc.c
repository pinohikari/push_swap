/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:38:43 by hhino             #+#    #+#             */
/*   Updated: 2023/05/29 13:54:16 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;
	size_t	bytes;

	if (size != 0 && __SIZE_MAX__ / size < count)
		return (NULL);
	bytes = count * size;
	dest = (char *)malloc(bytes);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, bytes);
	return ((void *)dest);
}
