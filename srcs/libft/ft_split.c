/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:30:09 by dquordle          #+#    #+#             */
/*   Updated: 2021/03/30 13:45:16 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char const *s, char c)
{
	int	i;
	int	j;

	if (!s[0])
		return (-1);
	i = 0;
	j = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			j++;
			while (s[i + 1] == c)
				i++;
		}
		i++;
	}
	if (s[i - 1] == c)
		j--;
	return (j);
}

static int	f_abort(char **res, int k)
{
	int	i;

	i = 0;
	while (i < k)
		free(res[i++]);
	free(res);
	return (0);
}

static int	trabaja(char **res, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		j = i;
		while (s[i] != c && s[i])
			i++;
		res[k] = (char *)malloc(i - j + 1);
		if (!res[k])
			return (f_abort(res, k));
		ft_strlcpy(res[k++], s + j, i - j + 1);
		while (s[i] == c && s[i])
			i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (counter(s, c) + 2));
	if (!res)
		return (NULL);
	if (!s[0])
	{
		res[0] = NULL;
		return (res);
	}
	if (!(trabaja(res, s, c)))
		return (NULL);
	res[counter(s, c) + 1] = NULL;
	return (res);
}
