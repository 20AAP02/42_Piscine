#include <unistd.h>

void ft_strlen(char *str)
{
    int s = 0;
    char count = '0';
    while(str[s] != '\0')
    {
        count++;
        s++;
    }
    write(1, &count, 1);
}