#include <stdio.h>

int ft_is_prime(int nb)
{
    int x;
    int count;

    x = 1;
    count = 0;
    while (x <= nb)
    {
        if ((nb % x) == 0)
            count++;
        x++;
    }
    if (count == 2)
        return (1);
    return (0);
}

int main()
{
    printf("%d\n", ft_is_prime(12));
}