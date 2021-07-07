/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:16:50 by dquordle          #+#    #+#             */
/*   Updated: 2020/11/06 16:07:41 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*my_dst;
	unsigned char	*my_src;

	my_dst = dst;
	my_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		my_dst[i] = my_src[i];
		if (my_src[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
