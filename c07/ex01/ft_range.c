#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = nb * -1;
		putchar('-');
	}
	if (nb <= 9 && nb >= 0 && nb != -2147483648)
	{
		putchar(nb + '0');
	}
	else if (nb != -2147483648)
	{
		ft_putnbr(nb / 10);
		putchar((nb % 10) + '0');
	}
}

int *ft_range(int min, int max)
{
    int *int_str;
    int index;
    int size;
    int index_zeroed;

    if (min >= max)
        return (int_str);
    size = max - min;
    int_str = malloc(sizeof(int) * size);
    if (int_str == NULL)
        return (int_str);
    index = min;
    index_zeroed = 0;
    while (index < max)
    {
        int_str[index_zeroed] = index;
        index_zeroed++;
        index++;
    }
    return (int_str);
}

int main()
{
    int *str;
    int max = 10;
    int min = -5;
    int size = max - min;
    str = ft_range(min, max);
    int index = 0;
    while (index < size)
    {
        ft_putnbr(*str);
        write(1, "\n", 1);
        index++;
        str++;
    }
    return 0;
}