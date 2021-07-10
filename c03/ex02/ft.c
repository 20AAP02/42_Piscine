int		ft_str_is_alpha(char *str)
{
	int cont_only_alph_char;
	int i;

	cont_only_alph_char = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			cont_only_alph_char = 0;
		}
		i++;
	}
	return (cont_only_alph_char);
}
