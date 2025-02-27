/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:19:40 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/10 13:41:57 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	wrb(char a, char b, char c, char d);

void	ft_print_comb2(void);

void	wrb(char a, char b, char c, char d)
{
	if ((a * 10 + b) < (c * 10 + d))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (((a * 10) + b + (c * 10) + d) < 1253)
			write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	i[4];

	i[0] = '0';
	while (i[0] < ':')
	{
		i[1] = '0';
		while (i[1] < ':')
		{
			i[2] = '0';
			while (i[2] < ':')
			{
				i[3] = '0';
				while (i[3] < ':')
				{
					wrb(i[0], i[1], i[2], i[3]);
					i[3]++;
				}
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
}
