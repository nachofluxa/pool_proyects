/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:13:55 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/22 11:46:57 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
