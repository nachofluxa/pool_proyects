/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 19:27:31 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/14 19:35:23 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

/* ******************************* PROTOTIPOS ******************************* */

void cuatro(int *matrix, int i, int j);
void uno(int *matrix, int i, int j);

/* ******************************* FUNCIONES ******************************** */

void rush(int *matrix)
{
	int i;
	int j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			uno(matrix, i, j);
			cuatro(matrix, i, j);
			j++;
		}
		i++;0
	}
}

void uno(int *matrix, int i, int j)
{
	if (*(matrix + j + (i * 6)) == 1)
	{
		if (i == 0)
			*(matrix + j + ((i + 1) * 6)) = 4;
		else if (j == 0)
			*(matrix + j + 1 + (i * 6)) = 4;
		else if (i == 5)
			*(matrix + j + ((i - 1) * 6)) = 4;
		else if (j == 5)
			*(matrix + j - 1 + (i * 6)) = 4;
	}
}

void cuatro(int *matrix, int i, int j)
{
	if (*(matrix + j + (i * 6)) == 4)
	{
		if (i == 0)
			while (++i < 5)
				*(matrix + j + (i * 6)) = i;
		else if (j == 0)
			while (++j < 5)
				*(matrix + j + 1 + (i * 6)) = j;
		else if (i == 5)
			while (--i > 0)
				*(matrix + j + (i * 6)) = 5 - i;
		else if (j == 5)
			while (--j > 0)
				*(matrix + j + (i * 6)) = 5 - j;
	}
}
