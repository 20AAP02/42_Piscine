#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int s = 0;
    while (s < size && src[s] != '\0')
    {
        dest[s] = src[s];
        s++;
    }

    dest[s] = '\0';

    return s;
}