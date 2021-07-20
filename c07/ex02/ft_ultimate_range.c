#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*int_str;
	int	index;
	int	size;
	int	index_zeroed;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	int_str = malloc(sizeof(int) * size);
	if (int_str == NULL)
		return (-1);
	index = min;
	index_zeroed = 0;
	while (index < max)
	{
		int_str[index_zeroed] = index;
		index_zeroed++;
		index++;
	}
	*range = int_str;
	return (size);
}

/*int main()
{
	int **i;
	printf("%d\n", ft_ultimate_range(i, 5, 11));
	return 0;
}*/