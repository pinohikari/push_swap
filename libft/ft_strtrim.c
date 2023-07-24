/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:13:15 by hhino             #+#    #+#             */
/*   Updated: 2023/06/21 20:11:43 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end < start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

// static int	is_set_char(char c, const char *set)
// {
// 	while (*set != '\0')
// 	{
// 		if (c == *set)
// 			return (1);
// 		set++;
// 	}
// 	return (0);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	start;
// 	size_t	end;
// 	char	*trimmedstr;
// 	size_t	i;

// 	start = 0;
// 	if (s1 == NULL || set == NULL)
// 		return (NULL);
// 	while (s1[start] != '\0' && is_set_char(s1[start], set))
// 		start++;
// 	end = start;
// 	while (s1[end] != '\0')
// 		end++;
// 	while (end > start && is_set_char(s1[end - 1], set))
// 		end--;
// 	i = 0;
// 	trimmedstr = (char *)malloc((end - start + 1) * sizeof(char));
// 	if (trimmedstr == NULL)
// 		return (NULL);
// 	ft_strlcpy(trimmedstr, s1 + start, end - start + 1);
// 	trimmedstr[end - start] = '\0';
// 	return (trimmedstr);
// }
