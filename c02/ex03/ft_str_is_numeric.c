int ft_str_is_numeric(char *str)
{
    int s = 0;
    while(s != '\0')
    {
        if (str[s] < 48 || str[s] > 57)
        {
            return 0;
        }
        s++;
    }

    return 1;
}