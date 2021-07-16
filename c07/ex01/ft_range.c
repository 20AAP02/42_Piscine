#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *ft_range(int min, int max)
{
    int *int_str;
    int index;
    int size;
    int index_zeroed;

    if (min >= max)
        return (int_str);
    size = max - min;
    int_str = malloc(sizeof(int) * size);
    if (int_str == NULL)
        return (int_str);
    index = min;
    index_zeroed = 0;
    while (index < max)
    {
        int_str[index_zeroed] = index;
        index_zeroed++;
        index++;
    }
    return (int_str);
}