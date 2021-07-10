/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:36:14 by amaria-m          #+#    #+#             */
/*   Updated: 2021/07/10 16:17:55 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				length;
	unsigned int	s;

	s = 0;
	while ((s < size - 1) && (src[s] != '\0'))
	{
		dest[s] = src[s];
		s++;
	}
	length = s;
	while (s < size)
	{
		dest[s] = '\0';
		s++;
	}
	return (length);
}
