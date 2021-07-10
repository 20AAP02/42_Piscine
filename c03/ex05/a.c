int		ft_str_is_uppercase(char *str)
{
	int is_uppercase;
	int i;

	is_uppercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			is_uppercase = 0;
		}
		i++;
	}
	return (is_uppercase);
}
