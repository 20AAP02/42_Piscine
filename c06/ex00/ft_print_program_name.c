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

int main(int argv, char *argc[])
{
    ft_putstr(argc[0]);
    write(1, "\n", 1);
    return (0);
}