/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:57:34 by dquordle          #+#    #+#             */
/*   Updated: 2020/11/06 16:09:22 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*my_dst;
	const char	*my_src;

	if (src == NULL && dst == NULL)
		return (NULL);
	my_dst = dst;
	my_src = src;
	while (n--)
		my_dst[n] = my_src[n];
	return (dst);
}
