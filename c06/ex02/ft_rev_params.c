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
    int x;

    x = argv - 1;
    while (x > 0)
    {
        ft_putstr(argc[x]);
        write(1, "\n", 1);
        x--;
    }
    return (0);
}