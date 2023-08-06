/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:46:39 by hhino             #+#    #+#             */
/*   Updated: 2023/08/06 16:30:59 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		str_isdigit(char *str, int argc);
int			*get_num(char *str, t_info *info);
static int	atoi_helper(char *str, int i, int flag);
int			ft_atoi(char *str);

void	str_isdigit(char *str, int argc)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (str[i] == ' ' && argc == 2)
			i++;
		else if (ft_isdigit(str[i]))
			i++;
		else
			error_exit("str_isdigit");
	}
}

int	*get_num(char *str, t_info *info)
{
	int		i;
	size_t	len;
	char	**arr;
	int		*intarr;

	len = ft_strlen(str);
	intarr = malloc(sizeof(int) * (len + 1));
	if (intarr == NULL)
		error_exit("malloc");
	arr = ft_split(str, ' ');
	i = 0;
	while (arr[i] != NULL)
	{
		intarr[i] = ft_atoi(arr[i]);
		i++;
	}
	info->size = i;
	ft_free_tab(arr);
	return (intarr);
}

int	ft_atoi(char *str)
{
	int	ans;
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	ans = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			flag = -1;
		i = 1;
	}
	if (!ft_isdigit(str[i]))
		error_exit("atoi");
	ans = atoi_helper(str, i, flag);
	return (flag * ans);
}

static int	atoi_helper(char *str, int i, int flag)
{
	int	ans;

	ans = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (ans != 0 && ans == INT_MAX / 10)
		{
			if ((flag == -1 && str[i] > '8') || (flag == 1 && str[i] > '7'))
				error_exit("atoi");
		}
		if (ans != 0 && ans > INT_MAX / 10)
		{
			if (str[i] != '\0')
				error_exit("atoi");
		}
		ans = ans * 10 + (str[i] - '0');
		i++;
	}
	return (ans);
}
