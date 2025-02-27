/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:58:42 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/17 10:04:58 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	totalCaracteres;

	totalCaracteres = 0;
	while (str[totalCaracteres] != '\0')
	{
		totalCaracteres++;
	}
	return (totalCaracteres);
}
