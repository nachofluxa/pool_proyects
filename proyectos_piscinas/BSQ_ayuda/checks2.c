/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:37:03 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/26 13:37:11 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	get_width(char *c);
int	check_mine(char *c);
int	first_line(char *c);
int	get_nbr(char *str);

int	get_pos_charas(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\n')
		i++;
	return (i - 3);
}

int	chec_width(char	*map)
{
	int	i;
	int	j;
	int	s;
	int	s2;

	i = 0;
	while (map[i] != '\n')
		i++;
	i++;
	j = get_nbr(map);
	s = (s2 = 0);
	while (j > 0)
	{
		if (map[i] == '\n')
		{
			if ((s != s2) && (s != 0))
				return (0);
			s = s2;
			s2 = -1;
			j--;
		}
		s2++;
		i++;
	}
	return (1);
}

int	only_char(char *map)
{
	int	i;
	int	j;
	int	c;

	c = get_pos_charas(map);
	i = 0;
	while (map[i] != '\n')
		i++;
	j = get_nbr(map);
	while (j > 0)
	{
		if ((map[i] != map[c + 0]) && (map[i] != map[c + 1])
			&& (map[i] != '\n'))
			return (0);
		i++;
		if (map[i] == '\n')
			j--;
	}
	return (1);
}

int	checker_controller(char	*map)
{
	map += 0;
	if (chec_width(map) == 0)
		return (0);
	if (check_mine(map) == 0)
		return (0);
	if (first_line(map) == 0)
		return (0);
	if (only_char(map) == 0)
		return (0);
	return (1);
}
