#include <unistd.h>

void	putchar(char a)
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
