/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:39:25 by hhino             #+#    #+#             */
/*   Updated: 2023/05/30 15:47:58 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	if (!s)
		return (NULL);
	chr = (char)c;
	while (*s && *s != chr)
		s++;
	if (*s == chr)
		return ((char *)s);
	return (NULL);
}
