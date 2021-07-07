/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:57:56 by dquordle          #+#    #+#             */
/*   Updated: 2020/11/06 16:08:38 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*my_s;

	i = 0;
	my_s = (unsigned char *)s;
	while (i < n)
	{
		if (my_s[i] == (unsigned char)c)
			return (&my_s[i]);
		i++;
	}
	return (NULL);
}
