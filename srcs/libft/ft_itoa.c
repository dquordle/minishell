/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:21:48 by dquordle          #+#    #+#             */
/*   Updated: 2021/03/30 13:17:41 by dquordle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	kostily(char *res, int n)
{
	int		i;
	char	*str;

	str = "-2147483648";
	i = 0;
	if (n)
	{
		while (str[i])
		{
			res[i] = str[i];
			i++;
		}
	}
	else
		res[i++] = '0';
	res[i] = 0;
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	i = counter(n);
	res = (char *)malloc(i + 1);
	if (!res)
		return (NULL);
	if (n == -2147483648 || n == 0)
		kostily(res, n);
	else
	{
		if (n < 0)
		{
			res[0] = '-';
			n *= -1;
		}
		res[i--] = 0;
		while (n != 0)
		{
			res[i--] = n % 10 + 48;
			n /= 10;
		}
	}
	return (res);
}
