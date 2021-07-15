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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
    int x;
    int count_disorder;
    char *temp;

    if (argc < 2)
		return (0);
    count_disorder = 1;
    while (count_disorder > 0)
    {
        count_disorder = 0;
        x = 1;
        while (x < argc - 1)
        {
            if (ft_strcmp(argv[x], argv[x + 1]) == 1)
            {
                temp = argv[x];
                argv[x] = argv[x + 1];
                argv[x + 1] = temp;
                count_disorder++;
            }
            x++;
        }
    }
    x = 1;
    while (x < argc)
    {
        ft_putstr(argv[x]);
        write(1, "\n", 1);
        x++;
    }
    return 0;
}