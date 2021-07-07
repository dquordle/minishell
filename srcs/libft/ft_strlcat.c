/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:30:54 by dquordle          #+#    #+#             */
/*   Updated: 2021/03/30 14:09:17 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (dst[i])
		i++;
	k = i;
	j = 0;
	while (src[j])
	{
		if ((int)j < (int)dstsize - (int)k - 1)
			dst[i++] = src[j];
		j++;
	}
	dst[i] = 0;
	if (i > dstsize)
		return (dstsize + j);
	return (k + j);
}
