/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:53:19 by dquordle          #+#    #+#             */
/*   Updated: 2020/11/06 16:15:38 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = -1;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (j != -1)
		return (&str[j]);
	else if (c == 0)
		return (&str[i]);
	return (NULL);
}
