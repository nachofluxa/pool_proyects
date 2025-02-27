/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:03:28 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/19 19:29:23 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if ((nb == 0) && (power == 0))
		return (1);
	else
	{
		i = 0;
		while (i < power)
		{
			result = result * nb;
			i++;
		}
	}
	return (result);
}
