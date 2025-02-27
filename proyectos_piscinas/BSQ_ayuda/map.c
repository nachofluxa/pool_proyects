/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:37:37 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/26 13:37:38 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototipes.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		largest_row(char *map, int c);
void	fill_row(int pos, int size, char *map, int c);
int		locate_square(int *size, char *map, int c);
int		get_pos_charas(char *map);
int		checker_controller(char *c);
void	printt(char *map);
char	*read_first_line(void);
int		get_nbr(char *str);
int		write_standar_table(int l, char *file);

int	fill_map(char *str, char *file)
{
	int		f;
	ssize_t	i;

	f = open(file, O_RDONLY);
	if (f == -1)
		return (0);
	i = 0;
	while (read(f, str + i, 1) != 0)
		i++;
	return (1);
	close(f);
}

char	*read_map(char *file)
{
	int		f;
	ssize_t	i;
	char	alm[2];
	char	*buf;

	f = open(file, O_RDONLY);
	if (f == -1)
		return (0x0);
	i = 1;
	while (read(f, alm, 1) != 0)
		i++;
	close(f);
	buf = malloc(sizeof(char) * (int)i);
	fill_map(buf, file);
	return (buf);
}

char	*get_first_line(char *str)
{
	int		i;
	char	*buf;

	i = 0;
	while (*(str + i) != '\n')
		i++;
	buf = malloc(sizeof(char) * i);
	while (i-- > 0)
		*(buf + i) = *(str + i);
	return (buf);
}

int	table(char	*map)
{
	int		i;
	int		j;

	if (checker_controller(map) == 0)
	{
		write(1, "map error\n", 10);
		return (0);
	}
	j = get_pos_charas(map);
	i = largest_row(map, j);
	fill_row(locate_square(&i, map, j), i, map, j);
	printt(map);
	return (1);
}

int	main(int argc, char *argv[])
{
	int		k;
	char	*map;
	char	*fl;

	k = 0;
	fl = 0x0;
	while (k++ < argc - 1)
		map = read_map(argv[k]);
	if (argc == 1)
	{
		fl = read_first_line();
		k = write_standar_table(get_nbr(fl), "basura.txt");
		if (k == 0)
			map = 0x0;
		else
			map = read_map("basura.txt");
	}
	free(fl);
	if (map == 0x0)
		return (0);
	table(map);
	free(map);
	return (0);
}
