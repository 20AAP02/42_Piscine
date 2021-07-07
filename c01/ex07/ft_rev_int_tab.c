#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	arr[5000];
	int	s;
	int	s1;

	s = size - 1;
	s1 = 0;
	while (s >= 0)
	{
		arr[s1] = tab[s];
		s--;
		s1++;
	}
	s = 0;
	while (s < size)
	{
		tab[s] = arr[s];
		s++;
	}
}
