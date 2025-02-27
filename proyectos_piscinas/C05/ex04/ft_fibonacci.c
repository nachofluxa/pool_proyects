/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:49:11 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/20 12:03:07 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	int	j;
	int	i;

	i = 1;
	j = 1;
	if (index < 0)
		return (-1);
	else if ((index == 0) || (index == 1))
		return (index);
	else
		j = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (j);
}
