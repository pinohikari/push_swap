/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhino <hhino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:40:18 by hhino             #+#    #+#             */
/*   Updated: 2023/05/31 12:53:45 by hhino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	dest = NULL;
	while (lst != NULL)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&dest, (*del));
			return (NULL);
		}
		ft_lstadd_back(&dest, temp);
		lst = lst->next;
	}
	return (dest);
}
