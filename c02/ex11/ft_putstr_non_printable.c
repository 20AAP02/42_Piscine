/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:18:32 by amaria-m          #+#    #+#             */
/*   Updated: 2021/07/10 16:18:46 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inisialize_array(char arr[16])
{
	int		x;
	char	l;

	x = 0;
	l = 'a';
	while (x <= 9)
	{
		arr[x] = x;
		x++;
	}
	while (l <= 'f')
	{
		arr[x] = l;
		x++;
		l++;
	}
}

void	print_hex_num(int *str)
{
	float	str1;
	int		n;
	int		remainder;
	char	hex_letters[16];

	inisialize_array(hex_letters);
	str1 = *str;
	if (*str != 0)
	{
		n = (str1 / 16);
		remainder = ((str1 / 16) - n) * 16;
		print_hex_num(&n);
		write(1, &hex_letters[remainder], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	s;
	int	sign;

	s = 0;
	while (str[s] != '\0')
	{
		if (str[s] < 32 || str[s] > 126)
		{
			write(1, "\\", 1);
			if (str[s] <= 15)
				write(1, "0", 1);
			sign = str[s];
			print_hex_num(&sign);
		}
		else
			write(1, &str[s], 1);
		s++;
	}
}
