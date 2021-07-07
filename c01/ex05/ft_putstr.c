#include <unistd.h>

void	ft_putstr(char *str)
{
	int	s;
	int	a;

	s = 0;
	while (str[s] != '\0')
	{
		a = str[s];
		write(1, &a, 1);
		s++;
	}
}
