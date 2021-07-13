#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int b;

    b = nb;
    while (power > 1)
    {
        nb *= b;
        power--;
    }
    return (nb);
}

int main()
{
    printf("%d\n", ft_iterative_power(3, 3));
}