/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:08:51 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/18 09:44:29 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	string(char c, char *str)
{
	while (*str)
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

int	space(char c)
{
	return (string(c, "\t\n\v\f\r "));
}

int	operator(char c)
{
	return (string(c, "+-"));
}

int	number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	resultado;
	int	signo;

	resultado = 0;
	signo = 1;
	while (space(*str))
		str++;
	while (operator(*str))
	{
		if (*str == '-')
			signo = signo * -1;
		str++;
	}
	while (number(*str))
	{
		resultado = resultado * 10;
		resultado = resultado + (*str - '0');
		str++;
	}
	return (resultado * signo);
}
