/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:38:03 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/26 13:38:05 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "prototipes.h"

int	largest_row(char *map, int c)
{
	int	pos;
	int	s;
	int	s2;

	pos = 0;
	s = 0;
	s2 = 0;
	while (map[pos] != '\0')
	{
		if (map[pos] != map[c + 0])
		{
			if (s2 < s)
				s2 = s;
			s = -1;
		}
		pos++;
		s++;
	}
	return (s2);
}

int	check_row(int pos, int size, char *map, int c)
{
	int	i;

	i = 0;
	while ((map[i + pos] == map[c + 0]) && (i < size))
		i++;
	if (i < size)
		return (0);
	return (1);
}

int	check_col(int pos, int size, char *map, int c)
{
	int	i;
	int	j;
	int	tam;

	if (map[pos] != map[c + 0])
		return (0);
	j = 1;
	tam = get_width(map);
	while (size > j)
	{
		i = 0;
		while ((map[pos + i] != '\n') && (map[pos + i] != '\0'))
			i++;
		if ((map[pos + i] == '\0') && (map[pos + i + 1] != '\0'))
			return (0);
		if (map[pos + ((tam + 1) * j)] != map[c + 0])
			return (0);
		j++;
	}
	return (1);
}

int	locate_square(int *size, char *map, int c)
{
	int	i;
	int	j;

	i = 0;
	while (map[i] != '\n')
		i++;
	i++;
	j = 0;
	while ((map[i + j] != '\0') && (j < *size))
	{
		if (check_col(i + j, *size, map, c) == 0)
		{
			i += j + 1;
			j = -1;
		}
		j++;
	}
	*size = *size - 1;
	if ((map[i + j] == '\0') && (*size > 0))
		return (locate_square(size, map, c));
	return (i);
}

void	fill_row(int pos, int size, char *map, int c)
{
	int	i;
	int	j;
	int	s;

	s = get_width(map) + 1;
	i = 0;
	while (i <= size)
	{
		j = 0;
		while (j <= size)
		{
			if (map[pos + j + (i * s)] == map[c + 0])
				map[pos + j + (i * s)] = map[c + 2];
			j++;
		}
		i++;
	}
}
