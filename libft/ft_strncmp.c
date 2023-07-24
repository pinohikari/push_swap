/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:39:44 by hhino             #+#    #+#             */
/*   Updated: 2023/05/29 13:58:44 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*buff_s1;
	const unsigned char	*buff_s2;

	buff_s1 = (const unsigned char *)s1;
	buff_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (i == n)
		return (0);
	else
		return ((int)(buff_s1[i] - buff_s2[i]));
}
