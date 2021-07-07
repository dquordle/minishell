/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:16:57 by dquordle          #+#    #+#             */
/*   Updated: 2021/03/30 13:40:31 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	instr(const char *set, char c)
{
	int	i;

	if (!set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	start = 0;
	while (instr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (instr(set, s1[end]))
		end--;
	if (!s1[start])
		start = 1;
	res = (char *)malloc(end - start + 2);
	if (!res)
		return (NULL);
	res[end - start + 1] = 0;
	while (end >= start)
	{
		res[end - start] = s1[end];
		end--;
	}
	return (res);
}
