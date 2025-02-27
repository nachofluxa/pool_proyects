/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:43:25 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/21 12:58:16 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;
	int	resto;

	i = 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (i < nb)
		{
			resto = nb % i;
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
}
