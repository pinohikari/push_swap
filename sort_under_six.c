/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_six.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:21:29 by hhino             #+#    #+#             */
/*   Updated: 2023/08/04 19:12:44 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_under_six(t_info info, t_stack *top, int size)
{
	(void)info;
	if (size == 1)
		error_exit("one arg");
	if (size == 2)
		sort_two(top, size);
	// if (size == 3)
	// 	sort_three(top, size);
	// if (size > 3)
	// 	sort_four_to_six(top, size);
}
