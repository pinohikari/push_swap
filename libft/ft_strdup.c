/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:39:29 by hhino             #+#    #+#             */
/*   Updated: 2023/05/30 15:48:51 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	src_size;
	char	*dest;

	if (!s1)
		return (NULL);
	src_size = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * (src_size + 1));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s1, src_size + 1);
	return (dest);
}
