#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	s;
	int	a;

	s = 0;
	while (str[s] != '\0')
	{
		a = str[s];
		write(1, &a, 1);
		s++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int	s;

	s = 0;
	while (src[s] != '\0')
	{
		dest[s] = src[s];
		s++;
	}
	dest[s] = '\0';
	return (dest);
}

int	ft_atoi(char *str)
{
	int	number;
	int	sign;

	sign = 1;
	number = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		number = (number * 10) + (*str - 48);
		str++;
	}
	return (number * sign);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
			{
				j++;
			}
			else
				break ;
		}
		if (to_find[j] == '\0' && str[i + j] == ':')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

int file_size(char *name)
{
    int fd;
    int n;
    int count;
    char str[1];

    fd = open(name, O_RDONLY);
    if (n != -1)
    {
        count = 0;
        n = read(fd, str, sizeof(char));
        while (n != 0)
        {
            if (*str != ' ')
                count++;
            n = read(fd, str, sizeof(char));
        }
    }
    return (count);
}

char *copy_file_to_str(char *file_name, char *str)
{
    int fd;
    int n;
    int index;

    fd = open(file_name, O_RDONLY);
    if (n != -1)
    {
        index = 0;
        n = read(fd, &str[index], sizeof(char));
        while (n != 0)
        {
            if (str[index] != ' ')
                index++;
            n = read(fd, &str[index], sizeof(char));
        }
    }
    return (str);
}

void find_print_word_in_dict(char *number)
{
    while (*number != '\n')
    {
        while (*number < 97 || *number > 122)
        {
            number++;
        }
        while (*number >= 97 && *number <= 122)
        {
            ft_putchar(*number);
            number++;
        }
    }
}

int find_number(char *number)
{
    int len;
    int index;
    int zeros;
    int num;

    zeros = 1;
    len = ft_strlen(number);
    index = 0;
    while (index < len - 1)
    {
        zeros *= 10;
        index++;
    }
    index = 0;
    while (index < len)
    {
        if (number[index] != '0')
        {
            num = ft_atoi(number[index]);
            num *= zeros;
            zeros /= 10;
            // itoa para tornar o int numa string
            find_print_word_in_dict(number);
        }
        index++;
    }
}

int main(int argc, char *argv[])
{
    char    *origin_file = "numbers.dict";
    char file_name[100];
    int size;
    char    *str;
    char    to_find[40];
    char    *number;

    if (argc == 2)
    {
        ft_strcpy(file_name, origin_file);
        ft_strcpy(to_find, argv[1]);
    }
    else if (argc == 3)
    {
        ft_strcpy(file_name, argv[1]);
        ft_strcpy(to_find, argv[2]);
    }
    else
        return (0);
    size = file_size(file_name);
    str = malloc(sizeof(char) * size);
    if (str == NULL)
        return (0);
    copy_file_to_str(file_name, str);

    number = ft_strstr(str, to_find);
    if (number != NULL)
        find_print_word_in_dict(number);
    else
        ft_putstr("Dict Error\n");

    return (0);
}
