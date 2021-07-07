void ft_sort_int_tab(int *tab, int size)
{
    int s;
    int s1 = 1;

    while(s1 > 0)
    {
        s1 = 0;
        s = 0;
        while (s < size - 1)
        {
            if (tab[s] > tab[s + 1])
            {
                int temp = tab[s];
                tab[s] = tab[s + 1];
                tab[s + 1] = temp;
                s1++;
            }
            s++;
        }
    }
}