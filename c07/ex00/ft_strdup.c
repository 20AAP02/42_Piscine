#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    int x;

    x = 0;
    while (str[x])
    {
        write(1, &str[x], 1);
        x++;
    }
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

char *ft_strdup(char *src)
{
    int src_lenght;
    char    *str;
    int index;

    src_lenght = ft_strlen(src);
    str = malloc(src_lenght + 1);
    if (!str)
        return str;    
    index = 0;
    while (src[index] != '\0')
    {
        str[index] = src[index];
        index++;
    }
    str[index] = '\0';
    return (str);
}

int main()
{
    char *str1;
    char str[10];
    str1 = ft_strdup(str);
    ft_putstr(str1);
}