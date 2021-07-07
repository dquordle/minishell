/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:31:50 by dquordle          #+#    #+#             */
/*   Updated: 2020/11/06 16:06:00 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*buf;

	while ((*lst))
	{
		buf = (*lst)->next;
		(*del)((*lst)->content);
		free((*lst));
		(*lst) = buf;
	}
}
