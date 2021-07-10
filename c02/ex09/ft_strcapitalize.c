/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:17:33 by amaria-m          #+#    #+#             */
/*   Updated: 2021/07/10 16:17:38 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_if_letter(char a)
{
	if (a > 47 && a < 58)
		return (0);
	else if ((a < 65) || (a > 90 && a < 97) || (a > 122))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
	{
		if (str[s] < 123 && str[s] > 96)
		{
			if (s == 0 || check_if_letter(str[s - 1]) == 1)
				str[s] -= 32;
		}
		else if (str[s] > 65 && str[s] < 91)
		{
			if (check_if_letter(str[s - 1]) == 0)
				str[s] += 32;
		}
		s++;
	}
	return (str);
}
