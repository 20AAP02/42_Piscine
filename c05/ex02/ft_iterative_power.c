#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int b;

    b = nb;
    while (power > 1)
    {
        if (nb > 46341 || nb < 0)
            return 0;
        nb *= b;
        power--;
    }
    return (nb);
}
/*
int main()
{
    printf("%d\n", ft_iterative_power(46340, 3));
}
*/