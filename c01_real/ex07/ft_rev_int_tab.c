#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int arr[size];
    int s = size - 1;
    int s1 = 0;

    while(s >= 0)
    {
        arr[s1] = tab[s];
        s--;
        s1++;
    }

    s = 0;
    while(s < size)
    {
        tab[s] = arr[s];
        s++;
    }
}