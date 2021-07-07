/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 10:53:38 by dquordle          #+#    #+#             */
/*   Updated: 2021/03/30 13:36:36 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*cpy;

	i = ft_strlen(s1);
	cpy = (char *)malloc(i + 1);
	if (!cpy)
		return (NULL);
	cpy[i] = 0;
	while (i--)
		cpy[i] = s1[i];
	return (cpy);
}
