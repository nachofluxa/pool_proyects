/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:06:07 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/22 13:28:14 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	my_prime(int nb)
{
	int	i;
	int	j;

	i = 3;
	if (nb == 2)
		return (nb);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	j = 0;
	while (nb > 1)
	{
		j += nb % 10;
		nb /= 10;
	}
	if (j % 3 == 0)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (my_prime(nb) == 1)
		return (nb);
	i = 0;
	while (my_prime(nb) == 0)
		nb++;
	return (nb);
}
