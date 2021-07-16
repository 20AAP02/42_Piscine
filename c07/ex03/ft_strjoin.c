#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *final_string;
    int malloc_size;
    int index;

    index = 0;
    malloc_size = 0;
    while (index < size)
    {
        malloc_size += ft_strlen(strs[index]);
        index++;
    }
    if (malloc_size < 1)
        return (final_string);
    malloc_size += (ft_strlen(sep) * (size - 1));
    final_string = malloc(sizeof(char) * (malloc_size + 1));

    index = 0;
    while (index < (size - 1))
    {
        ft_strcat(final_string, strs[index]);
        ft_strcat(final_string, sep);
        index++;
    }
    ft_strcat(final_string, strs[size - 1]);
    return (final_string);
}

int main()
{
    char *strs[6] = {"ola", "mundo,", "isto", "e", "a", "42"};
    char *sep = " ";
    char *final_string;
    final_string = ft_strjoin(6, strs, sep);
    printf("%s\n", final_string);
}