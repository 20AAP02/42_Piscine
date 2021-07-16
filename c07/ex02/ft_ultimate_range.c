#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *int_str;
    int index;
    int size;
    int index_zeroed;

    if (min >= max)
        return (0);
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

void	test(char *t_min, char *t_max)
{
	int min;
	int max;
	int len;
	int **tab;

	min = ft_atoi(t_min);
	max = ft_atoi(t_max);
	len = ft_ultimate_range(tab, min, max);

	if (len)
		ft_put_t_nbr(tab, len);
}

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		return (0);

	test(argv[1], argv[2]);
	return 0;
}