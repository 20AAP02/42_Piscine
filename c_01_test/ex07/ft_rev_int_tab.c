void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;

	c = 0;
	while (c < (size / 2))
	{
		ft_swap((tab + c), (tab + (size - 1 - c)));
		c++;
	}		
}
