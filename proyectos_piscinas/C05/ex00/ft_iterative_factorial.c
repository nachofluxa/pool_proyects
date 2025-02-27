/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:56:32 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/19 18:57:23 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	resultado;
	int	i;

	i = 1;
	resultado = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		resultado = resultado * i;
		i++;
	}
	return (resultado);
}
