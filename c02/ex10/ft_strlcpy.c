#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int length;
    int s;

    s = 0;
    while ((s < size - 1) && (src[s] != '\0'))
    {
        dest[s] = src[s];
        s++;
    }
    length = s;
    while (s < size)
    {
        dest[s] = '\0';
        s++;
    }
    return length;
}