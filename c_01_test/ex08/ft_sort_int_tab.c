void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	first;
	int	second;

	first = 0;
	while (first < size - 1)
	{
		second = first + 1;
		while (second < size)
		{
			if (tab[first] > tab[second])
			{
				ft_swap(&tab[first], &tab[second]);
			}
			second++;
		}
		first++;
	}
}
