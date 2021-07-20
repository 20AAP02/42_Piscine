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

/*int main()
{
	char str[] = "aaa";
	printf("%s\n", ft_strdup(str));
}*/