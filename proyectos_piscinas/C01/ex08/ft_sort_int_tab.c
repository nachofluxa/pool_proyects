/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:58:52 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/11 17:06:10 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	s;
	int	c;
	int	swap;

	c = 0;
	s = size - 1;
	while (c < s)
	{
		i = 0;
		j = 1;
		while (i < s)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			i++;
			j++;
		}
		c++;
	}
}

void ft_putnbrs(int *str, int size)
{
 int     i;
 printf("START\t");
 i = 0;
 while (i < size - 1)
     printf("%d,", *(str + i++));
 printf("%d\tEND\n", *(str + i));
}

int  main(void)
{
 int     table[10] = {9,5,4,6,7,8,1,3,2,0};
 int     *ptr;
 ptr = &table[0];
 ft_putnbrs(ptr, 10);
 ft_sort_int_tab(ptr, 10);
 ptr = &table[0];
 ft_putnbrs(ptr, 10);
 return (0);
}