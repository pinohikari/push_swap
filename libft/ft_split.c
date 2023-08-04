/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:29:19 by hhino             #+#    #+#             */
/*   Updated: 2023/08/04 19:14:27 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			i++;
			continue ;
		}
		count++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (count);
}

static size_t	get_seplen(char const *str, char c, int start)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = start;
	while (str[i] == c && str[i] != '\0')
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char	*cpy(char *dest, char const *src, unsigned int n, int j)
{
	char	*p;

	if (!dest)
		return (NULL);
	p = dest;
	src += j;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (p);
}

char	**ft_split(char const *str, char c)
{
	size_t		i;
	size_t		j;
	char		**sp;

	if (str == NULL)
		return (NULL);
	sp = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (sp == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (i < count_words(str, c))
	{
		while (str[j] == c)
			j++;
		sp[i] = cpy(malloc(sizeof(char) * (get_seplen(str, c, j) + 1)), str,
				get_seplen(str, c, j), j);
		if (sp[i] == NULL)
			return (ft_free_tab(sp));
		i++;
		j += get_seplen(str, c, j);
	}
	sp[i] = NULL;
	return (sp);
}
