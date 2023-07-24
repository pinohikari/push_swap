/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:19:07 by hhino             #+#    #+#             */
/*   Updated: 2023/05/29 13:59:15 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		dest = (char *)malloc(ft_strlen(s) + 1);
	else
		dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	ft_strlcpy(dest, s + start, len + 1);
	return (dest);
}
