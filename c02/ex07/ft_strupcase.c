/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:16:46 by amaria-m          #+#    #+#             */
/*   Updated: 2021/07/10 16:16:49 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
	{
		if (str[s] < 123 && str[s] > 96)
		{
			str[s] = str[s] - 32;
		}
		s++;
	}
	return (str);
}
