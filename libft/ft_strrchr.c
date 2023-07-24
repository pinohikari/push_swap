/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:39:52 by hhino             #+#    #+#             */
/*   Updated: 2023/05/30 18:33:49 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	chr;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	chr = (char)c;
	while (s[i] != chr && i > 0)
		i--;
	if (s[i] == chr)
		return ((char *)&s[i]);
	return (NULL);
}
