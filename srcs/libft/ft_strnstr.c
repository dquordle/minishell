/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:52:42 by dquordle          #+#    #+#             */
/*   Updated: 2020/11/06 16:15:18 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*res;

	res = (char *)haystack;
	if (needle[0] == 0)
		return (res);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			j = 0;
			while (needle[j] && needle[j] == haystack[k++] && k <= len)
				j++;
			if (needle[j] == 0)
				return (&res[i]);
		}
		i++;
	}
	return (NULL);
}
