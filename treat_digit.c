/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:46:39 by hhino             #+#    #+#             */
/*   Updated: 2023/07/29 20:03:59 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	str_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
			i++;
		else if (ft_isdigit(str[i]))
			i++;
		else
		{
			error_exit("Invalid argument");
			return (0);
		}
	}
	return (1);
}

int	**get_num(char *str)
{
	int		i;
	size_t	len;
	char	**arr;
	int		**intarr;

	i = 0;
	len = ft_strlen(str);
	arr = malloc(sizeof(char) * (len + 1));
	intarr = malloc(sizeof(int) * (len + 1));
	while (str[i] != '\0')
	{
		arr = ft_split(str, ' ');
		i++;
	}
	i = 0;
	while (arr != NULL)
	{
		intarr[i] = ft_atoi(str[i]); //atoi書き換え；正負符号1以上を弾き、intmax以上intmin以下を弾く
		i++;
	}
	return (intarr);
}

int	str_isinteger(char *str)
{
}
