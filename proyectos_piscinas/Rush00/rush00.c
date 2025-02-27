/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:30:44 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/08 18:58:55 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y);

void	rush (int x, int y)
{
	int	c;
	int	l;

	l = 0;
	while (l < y)
	{
		c = 0;
		while (c < x)
		{
			if ((c > 0) && (c < x - 1) && (l > 0) && (l < y - 1))
				ft_putchar(' ');
			else if (((c == 0) || (c == x - 1)) && ((l > 0) && (l < y - 1)))
				ft_putchar('|');
			else if (((l == 0) || (l == y - 1)) && ((c > 0) && (c < x - 1)))
				ft_putchar('-');
			else
				ft_putchar('o');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
