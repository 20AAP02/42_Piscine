#include <unistd.h>

void	ft_strlen(char *str)
{
	char	count;
	int		s;

	s = 0;
	count = '0';
	while (str[s] != '\0')
	{
		count++;
		s++;
	}
	write(1, &count, 1);
}
