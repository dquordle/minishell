/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:15:04 by dquordle          #+#    #+#             */
/*   Updated: 2021/03/30 13:38:03 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (src == NULL)
		return (0);
	i = 0;
	while (src[i])
		i++;
	if (!dstsize)
		return (i);
	j = 0;
	while (j < dstsize - 1 && j < i)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = 0;
	return (i);
}
