/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:29:59 by hhino             #+#    #+#             */
/*   Updated: 2023/06/01 16:27:47 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dest = (char *)malloc(len1 + len2 + 1);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s1, len1 + 1);
	ft_strlcpy(&dest[len1], s2, len2 + 1);
	return (dest);
}
