#include <unistd.h>

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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


void	ft_sort_int_tab(char *tab[], int size)
{
	int	s;
	int	s1;
	char    *temp;

	s1 = 1;
	while (s1 > 0)
	{
		s1 = 0;
		s = 0;
		while (s < size - 1)
		{
			if (ft_strcmp(tab[s], tab[s + 1]) == 1)
			{
				ft_strncpy(temp, tab[s], ft_strlen(tab[s]));
				ft_strncpy(tab[s], tab[s + 1], ft_strlen(tab[s + 1]));
				ft_strncpy(tab[s + 1], temp, ft_strlen(temp));
				s1++;
			}
			s++;
		}
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
			{
				j++;
			}
			else
				break ;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
    int x;
    char *program_name;
	if (argv < 2)
		return (0);
    program_name = argv[0];
    ft_sort_int_tab(argv, argc);
    x = 1;
    while (x < argv)
    {
        if (ft_strstr(program_name, argc[x]) != program_name)
        {
            ft_putstr(argc[x]);
            write(1, "\n", 1);
        }
        x++;
    }
    return (0);
}