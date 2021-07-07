int ft_str_is_printable(char *str)
{
    int s = 0;
    while(s != '\0')
    {
        if (str[s] < 33 || str[s] > 126)
        {
            return 0;
        }
        s++;
    }

    return 1;
}