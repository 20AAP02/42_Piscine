#include <stdio.h>

int discover_if_prime(int nb)
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

int ft_find_next_prime(int nb)
{
    if (discover_if_prime(nb) == 1)
        return (nb);
    else
        return ft_find_next_prime(nb + 1);
}

int main()
{
    printf("%i\n", ft_find_next_prime(62));
}