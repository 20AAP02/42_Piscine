#include "rush_h_02.h"

char *ft_strcpy(char *dest, char *src)
{
    int s;

    s = 0;
    while (src[s] != '\0')
    {
        dest[s] = src[s];
        s++;
    }
    dest[s] = '\0';
    return (dest);
}