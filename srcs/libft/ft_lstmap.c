/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:12:41 by dquordle          #+#    #+#             */
/*   Updated: 2021/03/30 13:20:24 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapa;
	t_list	*buf;

	if (!lst)
		return (NULL);
	mapa = ft_lstnew((*f)(lst->content));
	if (!mapa)
		return (NULL);
	buf = mapa;
	lst = lst->next;
	while (lst)
	{
		mapa->next = ft_lstnew((*f)(lst->content));
		if (!(mapa->next))
		{
			ft_lstclear(&mapa, (*del));
			return (NULL);
		}
		lst = lst->next;
		mapa = mapa->next;
	}
	return (buf);
}
