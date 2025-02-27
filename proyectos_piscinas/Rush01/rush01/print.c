/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:26:43 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/08/14 17:47:33 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include <unistd.h>

/* ******************************* PROTOTIPOS ******************************* */

/* ******************************* FUNCIONES ******************************** */

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putmatrix(int *matrix)
{
	int i;
	int j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			ft_putchar('0' + *(matrix + j + (i * 6)));
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

// void ft_putmatrix(int *matrix)
// {
// 	int i;
// 	int j;

// 	i = 1;
// 	while (i < 5)
// 	{
// 		j = 1;
// 		while (j < 5)
// 		{
// 			ft_putchar('0' + *(matrix + j + (i * 6)));
// 			ft_putchar(' ');
// 			j++;
// 		}
// 		ft_putchar('\n');
// 		i++;
// 	}
// }
