/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:33:32 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/12 13:01:30 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	c;

	if	(nb = -2147483648)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = nb * -1;
		c = '-';
		write(1, &c, 1);
	}
	else if (nb >= 10)
		ft_putnbr(nb / 10);
	c = '0';
	else if (nb >= 10)
		c += nb % 10;
	else
		c += nb;
	write(1, &c, 1);
}
