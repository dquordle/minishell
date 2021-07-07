/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 23:09:43 by dquordle          #+#    #+#             */
/*   Updated: 2020/11/06 16:09:03 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*my_s1;
	unsigned char	*my_s2;
	size_t			i;

	my_s1 = (unsigned char *)s1;
	my_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (my_s1[i] == my_s2[i])
			i++;
		else
			return (my_s1[i] - my_s2[i]);
	}
	return (0);
}
