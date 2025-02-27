/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:33:32 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/17 17:31:00 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	min(void);

void	ft_putnbr(int nb);

void	min(void)
{
	write (1, "-", 1);
	write (1, "2", 1);
	write (1, "1", 1);
	write (1, "4", 1);
	write (1, "7", 1);
	write (1, "4", 1);
	write (1, "8", 1);
	write (1, "3", 1);
	write (1, "6", 1);
	write (1, "4", 1);
	write (1, "8", 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{	
		min();
		return ;
	}	
	if (nb < 0)
	{		
		write (1, "-", 1);
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}		
	nb = nb % 10 + '0';
	write(1, &nb, 1);
}
