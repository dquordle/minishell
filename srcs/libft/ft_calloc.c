/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 11:10:46 by dquordle          #+#    #+#             */
/*   Updated: 2021/03/30 13:15:58 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*arr;

	arr = malloc(size * count);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < count * size)
		arr[i++] = 0;
	return ((void *)arr);
}
