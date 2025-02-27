/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:37:57 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/26 13:37:59 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	fill_map(char *str, char *file);

char	*read_first_line(void)
{
	char	i[2];
	ssize_t	j;
	int		f;
	char	*buf;

	f = open("basura.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (f == -1)
		return (0x0);
	j = 0;
	while ((read(0, &i[0], 1) > 0) && (i[0] != '\n'))
	{
		write(f, i, 1);
		j++;
	}
	write(f, "\n", 1);
	close(f);
	buf = malloc(sizeof(char) * ((int)j));
	fill_map(buf, "basura.txt");
	return (buf);
}

int	get_nbr(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if ((*str < '0') || (*str > '9') || (str == 0x0))
		return (-1);
	while (str[i] != '\n')
		i++;
	if (i < 4)
		return (-1);
	i -= 3;
	j = 0;
	k = 0;
	while (j < i)
	{
		if ((str[j] >= '0') && (str[j] <= '9'))
			k = (k * 10) + (str[j] - '0');
		else
			return (-1);
		j++;
	}
	if (k == 0)
		return (-1);
	return (k);
}

int	write_standar_table(int l, char *file)
{
	int		f;
	int		i;
	char	c[2];

	i = 0;
	f = open("basura.txt", O_RDWR);
	if (f < 0)
		return (0);
	while (read(f, c, 1) > 0)
		i++;
	i = 0;
	while (i == 0)
	{
		read(0, c, 1);
		write(f, c, 1);
		if (*c == '\n')
			i++;
	}
	if (l > 1)
		if (write_standar_table(l - 1, file) == 0)
			return (0);
	close(f);
	return (1);
}

void	printt(char *map)
{
	int	i;
	int	j;

	i = 0;
	j = get_nbr(map);
	while (map[i] != '\n')
		i++;
	i++;
	while (j > 0)
	{
		write(1, map + i, 1);
		if (map[i] == '\n')
			j--;
		i++;
	}
}
