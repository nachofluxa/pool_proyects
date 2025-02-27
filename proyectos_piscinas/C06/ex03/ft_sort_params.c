/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:30:49 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/19 13:42:39 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *c1, char *c2)
{
	int	i;

	i = 0;
	while ((c1[i] == c2[i]) && (c1[i] != '\0' && c2[i] != '\0'))
		i++;
	return (c1[i] - c2[i]);
}

int	main(int argc, char **argv)
{
	char	*aux;
	int		comparador;
	int		i;

	comparador = 1;
	while (comparador)
	{
		comparador = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = aux;
				comparador = 1;
			}
		}
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]), ft_putchar('\n');
	return (0);
}
