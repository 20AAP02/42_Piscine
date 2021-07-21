#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}
	return (s);
}

char	*ft_strdup(char *src)
{
	int		src_lenght;
	char	*str;
	int		index;

	src_lenght = ft_strlen(src);
	str = malloc(src_lenght + 1);
	if (!str)
		return (str);
	index = 0;
	while (src[index] != '\0')
	{
		str[index] = src[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}

typedef struct s_stock_str
{
    int size;
    char *str;
    char *copy;
}   t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *arr;

    arr = malloc(sizeof(t_stock_str*) * ac);
    if (arr == NULL)
        return (arr);    
    i = 0;
    while (i < ac)
    {
        arr[i].size = strlen(av[i]);
        arr[i].str = av[i];
        arr[i].copy = ft_strdup(av[i]);
        i++;
    }
    arr[i].str = 0;
    return (arr);
}
