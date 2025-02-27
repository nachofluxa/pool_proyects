/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:07:16 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/10 13:41:15 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int i);

void	ft_is_negative(int i)
{
	char	p;
	char	n;

	p = 'P';
	n = 'N';
	if (i >= 0)
	{
		write (1, &p, 1);
	}
	else
		write (1, &n, 1);
}
