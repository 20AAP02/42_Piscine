#include <unistd.h>

int	ft_strlen(char *str)
{
	int		s;

	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}
	return (s);
}

int check_base(char *base)
{
    int x;
    int y;

    if (ft_strlen(base) <= 1)
        return 1;
    x = 0;
    y = 0;
    while (base[x] != '\0')
    {
        while (base[y] != '\0')
        {
            if (base[x] == base[y] && x != y)
                return 1;
            else if (base[x] == '+' || base[x] == '-')                        
                return 1;
            y++;
        }       
        x++;
    }
    return 0;
}

void ft_putnbr_base(int nbr, char *base)
{
    int base_size;
    int x;

    if (check_base(base) == 1)
        return ;
    if (nbr < 0)
    {
        write(1, "-",1);
        nbr *= -1;
    }
    base_size = ft_strlen(base);
    if (nbr < base_size)
        write(1, &base[nbr], 1);
    else
    {
        x = nbr / base_size;
        ft_putnbr_base(x, base);
        x = nbr % base_size;
        write(1, &base[x], 1);
    }
}

int main()
{
    int a = -10;
    char base[] = "01";
    ft_putnbr_base(a, base);
}