/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:10:28 by amaria-m          #+#    #+#             */
/*   Updated: 2021/07/12 10:24:02 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	dest_len;
	int	src_len;
	int	dest_end;
	int	src_index;

	dest_len = strlen(dest);
	src_len = strlen(src);
	dest_end = dest_len;
	src_index = 0;
	while (src[src_index] != '\0')
	{
		dest[dest_end] = src[src_index];
		dest_end++;
		src_index++;
		if (dest_end == size - 1)
			break ;
	}
	dest[dest_end] = '\0';
	return (dest_len + src_len);
}
