/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 09:59:38 by amaria-m          #+#    #+#             */
/*   Updated: 2021/07/07 19:03:44 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c)
{
	char	d;
	char	e;

	d = ',';
	e = ' ';
	if (a == 55 && b == 56 && c == 57)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &e, 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (a != b && a != c && b != c && b > a && c > b)
					print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
