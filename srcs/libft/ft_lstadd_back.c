/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:54:09 by dquordle          #+#    #+#             */
/*   Updated: 2020/11/03 14:18:18 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*buf;

	if (!(*lst))
		*lst = new;
	else
	{
		buf = *lst;
		while (buf->next)
			buf = buf->next;
		buf->next = new;
	}
}
