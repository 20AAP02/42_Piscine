/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:34:47 by amaria-m          #+#    #+#             */
/*   Updated: 2021/07/07 19:10:55 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_1(int x, int y)
{
	char	a;
	char	b;

	a = x + '0';
	b = y + '0';
	write(1, "0", 1);
	write(1, &a, 1);
	write(1, " ", 1);
	write(1, "0", 1);
	write(1, &b, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	write_2(int x, int y)
{
	char	a;
	char	y1;
	char	y2;

	a = x + '0';
	y1 = (y / 10) + '0';
	y2 = (y % 10) + '0';
	write(1, "0", 1);
	write(1, &a, 1);
	write(1, " ", 1);
	write(1, &y1, 1);
	write(1, &y2, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	write_3(int x, int y)
{
	char	x1;
	char	x2;
	char	y1;
	char	y2;

	x1 = (x / 10) + '0';
	x2 = (x % 10) + '0';
	y1 = (y / 10) + '0';
	y2 = (y % 10) + '0';
	write(1, &x1, 1);
	write(1, &x2, 1);
	write(1, " ", 1);
	write(1, &y1, 1);
	write(1, &y2, 1);
	if (x != 98 || y != 99)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x < 100)
	{
		y = 0;
		while (y < 100)
		{
			if (x < y && x < 10 && y < 10)
				write_1(x, y);
			else if (x < y && x < 10 && y > 9)
				write_2(x, y);
			else if (x < y && x > 9 && y > 9)
				write_3(x, y);
			y++;
		}
		x++;
	}
}
