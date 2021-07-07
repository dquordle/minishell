/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:04:06 by dquordle          #+#    #+#             */
/*   Updated: 2021/03/30 13:39:12 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	res = (char *)malloc(i + 1);
	if (!res)
		return (NULL);
	res[i] = 0;
	while (i--)
		res[i] = (*f)(i, s[i]);
	return (res);
}
