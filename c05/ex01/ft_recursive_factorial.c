#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb > 46341 || nb < 0)
        return 0;
    if (nb == 1)
        return nb;
    nb *= ft_recursive_factorial(nb - 1);
    return nb;
}

int main()
{
    printf("%d\n", ft_recursive_factorial(9));
}