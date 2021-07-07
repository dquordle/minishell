/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dquordle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:55:20 by dquordle          #+#    #+#             */
/*   Updated: 2021/03/30 13:53:37 by dquordle         ###   ########.fr       */
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

static void	ftt_itoa(int n, int fd)
{
	char	res[12];
	int		count;
	int		quant;

	count = counter(n);
	quant = count;
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	res[count--] = 0;
	while (n != 0)
	{
		res[count--] = n % 10 + 48;
		n /= 10;
	}
	write(fd, res, quant);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else
		ftt_itoa(n, fd);
}
