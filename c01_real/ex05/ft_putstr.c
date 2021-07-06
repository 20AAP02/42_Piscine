#include <unistd.h>

void ft_putstr(char *str)
{
    int s = 0;
    while(str[s] != '\0')
    {
        char a = str[s];
        write(1, &a, 1);
        s++;
    }
}