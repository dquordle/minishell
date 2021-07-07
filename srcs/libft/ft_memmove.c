/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:39:40 by dquordle          #+#    #+#             */
/*   Updated: 2020/11/06 16:09:39 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*my_dst;
	const char	*my_src;
	size_t		i;

	if (dst == NULL && src == NULL)
		return (NULL);
	my_dst = dst;
	my_src = src;
	if (dst <= src)
	{
		i = 0;
		while (i < len)
		{
			my_dst[i] = my_src[i];
			i++;
		}
	}
	else
	{
		while (len--)
			my_dst[len] = my_src[len];
	}
	return (dst);
}
