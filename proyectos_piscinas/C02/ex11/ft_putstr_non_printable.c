/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 13:59:00 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/19 13:19:22 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_cambiobase(int c, int i)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 0 && i == 0)
	{
		c += 256;
	}
	if (c >= 16)
	{
		ft_cambiobase(c / 16, 1);
		ft_cambiobase(c % 16, 1);
	}
	else
	{
		if (i == 0)
			ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			j = str[i];
			ft_cambiobase(j, 0);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
