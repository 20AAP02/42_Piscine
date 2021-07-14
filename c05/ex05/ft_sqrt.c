#include <stdio.h>

int ft_sqrt(int nb)
{
    int x;

    x = 0;
    while (1)
    {
        if ((x * x) == nb)
            return (x);
        if ((x * x) > nb)
            return (0);
        x++;
    }
    return 0;
}

int main()
{
    printf("%d", ft_sqrt(9));
}