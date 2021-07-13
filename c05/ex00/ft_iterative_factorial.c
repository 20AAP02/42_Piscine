#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int b;

    b = nb - 1;
    while (b >= 1)
    {
        if (b > 46341 || b < 0)
            return 0;
        nb *= b;
        b--;
    }
    return (nb);
}

int main()
{
    printf("%d\n", ft_iterative_factorial(-47));
}