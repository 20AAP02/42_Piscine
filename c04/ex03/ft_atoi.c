/*
#include <stdio.h>
#include <stdlib.h>
*/
int	ft_putnbr(char *nb, int size, int sign)
{
	int	zeros;
	int	number;
	int	index;

	number = 0;
	zeros = 1;
	while((size - 1) > 0)
	{
		zeros *= 10;
		size--;
	}
	index = 0;
	while (nb[index] != '\0')
	{
		number += (nb[index] - 48) * zeros;
		zeros = zeros / 10;
		index++;
	}
	if (sign < 0)
		number *= -1;
	return (number);
}

int	ft_strlen(char *str)
{
	int		s;

	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}
	return (s);
}

int ft_atoi(char *str)
{
    int x;
    int sign;
    char    number[30];
    int number_index;
	int	size;

    x = 0;
    sign = 1;
    number_index = 0;
	size = 0;
	while (str[x] == ' ' || str[x] == '\f' || str[x] == '\n' 
	|| str[x] == '\r' || str[x] == '\t' || str[x] == '\v')
	{
		x++;
	}
    while (str[x] != '\0')
    {
        if (str[x] == '-')
            sign *= -1;
		else if (str[x] < '0' && str[x] != '+')
			return 0;
		else if (str[x] > '9' && str[x] != '+')
			return 0;
        while (str[x] >= '0' && str[x] <= '9')
        {
            number[number_index] = str[x];
            x++;
            number_index++;
        }
		if (number_index > 0)
			break ;
		x++;
	}
	number[number_index] = '\0';
	if(number[0] != '\0')
		size = ft_strlen(number);
	else
		return 0;
	return ft_putnbr(number, size, sign);
}

/*
int main()
{
	char str[100] = "  +++---2147483648rfef233";
	printf("%d\n%d\n", ft_atoi(str), atoi(str));
	return 0;
}
*/