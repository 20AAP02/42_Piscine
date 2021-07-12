int	ft_putnbr(int nb)
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
		return (nb + '0');
	}
	else if (nb != -2147483648)
	{
		ft_putnbr(nb / 10);
		return (nb % 10);
	}
}

int ft_atoi(char *str)
{
    int x;
    int sign;
    char    *number;
    int number_index;
	int	number_end;

    x = 0;
    sign = 1;
    number_index = 0;
	number_end = 0;
    while (str[x] != '\0')
    {
        if (str[x] == '-')
            sign *= -1;
        while (str[x] >= 48 && str[x] <= 57)
        {
            number[number_index] = str[x];
            x++;
            number_index++;
        }
		if (number_end == 1)
			break ;
	}
    
}