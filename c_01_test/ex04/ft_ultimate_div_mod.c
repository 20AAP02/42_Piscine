void	ft_ultimate_div_mod(int *a, int *b)
{
	if (*b != 0)
	{
		*a = (*a / *b);
		*b = (*a % *b);
	}
}
