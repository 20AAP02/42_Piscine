/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 12:00:23 by amaria-m          #+#    #+#             */
/*   Updated: 2021/07/02 12:03:48 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(char a, char b, char c, char d)
{
    char e;
    char f;

    e = ',';
    f = ' ';
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &f, 1);
    write(1, &c, 1);
    write(1, &d, 1);
    write(1, &e, 1);
    write(1, &f, 1);
}

void ft_print_comb2(void)
{}

int main()
{
    ft_print_comb2();
}
