unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	count;
	int	start = size;

	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	start -= count;
	while (start < 0)
	{
		start++;
	}
	x = 0;
	while (start < size && src[x] != '\0')
	{
		dest[start] = src[x];
		start++;
		x++;
	}
}
