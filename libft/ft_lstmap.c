/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 09:21:56 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/23 11:01:18 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*all_newl;
	t_list	*newl;

	if (lst == NULL)
		return (NULL);
	all_newl = ft_lstnew((f)(lst->content));
	if (all_newl == NULL)
		return (NULL);
	newl = all_newl;
	lst = lst->next;
	while (lst != NULL)
	{
		all_newl->next = ft_lstnew((f)(lst->content));
		if (all_newl->next == NULL)
		{
			ft_lstclear(&newl, del);
			return (0);
		}
		all_newl = all_newl->next;
		lst = lst->next;
	}
	all_newl->next = NULL;
	return (newl);
}
