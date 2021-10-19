#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		i;
	int		ii;
	int		tots;

	ret = malloc(sizeof(strs));
	ii = 0;
	tots = 0;
	while (ii < size)
	{
		i = 0;
		while (strs[ii][i])
		{
			ret[tots++] = strs[ii][i++];
		}
		i = 0;
		while (sep[i] != '\0' && ii != size - 1)
		{
			ret[tots++] = sep[i++];
		}
		ii++;
	}
	ret[tots] = '\0';
	return (ret);
}

/*int	main(void)
{
	char *text[10];

	text[0] = "Testando";
	text[1] = "a";
	text[2] = "funcao";
	text[3] = "ft_strjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "separador";
	text[7] = "\' - \'";
	text[8] = "e tamanho";
	text[9] = "10";

	printf("%s\n", ft_strjoin(10, text, " - "));
}*/