/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:39:49 by hhino             #+#    #+#             */
/*   Updated: 2023/05/29 17:32:31 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	int		i;
	size_t	len_dest;

	if (h == NULL)
		return (NULL);
	if (n == NULL || *n == 0)
		return ((char *)h);
	if (len == 0)
		return (0);
	if (ft_strlen(n) > ft_strlen(h))
		return (NULL);
	while (h != '\0' && len-- > 0)
	{
		if (*h == *n)
		{
			i = 1;
			len_dest = len;
			while (*(h + i) == *(n + i) && len_dest-- > 0 && *(n + i) != '\0')
				i++;
			if (*(n + i) == 0)
				return ((char *)h);
		}
		h++;
	}
	return (NULL);
}
