#include <unistd.h>

void print_hex_num(char *str)
{
    if (*str <= 9)
    {
        write(1, '0', 1);
        write(1, str, 1);
    }
    else
    {
        int n = *str / 16
        int n1 = n % 10
    }
}

void ft_putstr_non_printable(char *str)
{
    int s;

    s = 0;
    while(str[s] != '\0')
    {
        if (str[s] < 32 || str[s] > 126)
        {
            write(1, '\\', 1);
            print_hex_num(str[s]);
        }
        else
            write(1, str[s], 1);
    }
}