int		ft_str_is_lowercase(char *str)
{
	int is_lowercase;
	int i;

	is_lowercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			is_lowercase = 0;
		}
		i++;
	}
	return (is_lowercase);
}
