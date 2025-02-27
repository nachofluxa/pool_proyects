/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:36:32 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/26 13:36:57 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototipes.h"

int	get_pos_charas(char *map);

int	first_line(char *str)
{
	int	i;
	int	j;

	j = get_pos_charas(str);
	if ((str[j + 0] == '\0' || str[j + 1] == '\0' || str[j + 2] == '\0'))
		return (0);
	if (str[j + 0] == str[j + 1] || str[j + 0] == str[j + 2]
		|| str[j + 1] == str[j + 2])
		return (0);
	i = 0;
	while (str[i] != '\n')
	{
		if ((str[i] <= '!') || (str[i] >= '~'))
			return (0);
		i++;
	}
	return (1);
}

int	get_width(char *c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (c[i] != '\n')
		i++;
	k = i;
	i++;
	j = 0;
	while (c[i] != '\n')
	{
		j = i;
		i++;
	}
	return (j - k);
}

int	if_line_break(char *str)
{
	int	i;
	int	l;

	i = 0;
	while (str[i] != '\n')
		i++;
	l = 1;
	while (str[i] != '\0')
	{
		if ((str[i] == '\n') && (get_width(str) * l == i))
			str[i] = '0';
		else
			return (0);
		i++;
		l++;
	}
	i = 0;
	if (str[i] != l)
		return (0);
	return (1);
}

int	check_mine(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = get_pos_charas(str);
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] == str[c + 0])
			return (1);
		i++;
	}
	return (0);
}
