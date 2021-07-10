#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dec_to_hexa(int dec)
{
	while (dec > 15)
	{
		
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] <= 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			while(str[i] < )
		}
		i++;
	}
}
