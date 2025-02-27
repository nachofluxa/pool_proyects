/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:15:35 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/19 19:28:47 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	j;

	if (nb >= 0)
	{
		j = ft_recursive_factorial(nb - 1);
		if (j != 0)
			return (j * nb);
		else
			return (1);
	}
	else
		return (0);
}
