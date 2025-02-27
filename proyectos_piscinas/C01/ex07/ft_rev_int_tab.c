/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:58:47 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/12 11:36:52 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
void ft_putstr(int *str);
void ft_putchar(char c);
void ft_putnbr(int nb);
void ft_putchartable(char tb[]);
void ft_putnbr(int nb);

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size / 2)
	{
		j = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = j;
	}
}
