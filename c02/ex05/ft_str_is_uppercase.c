int ft_str_is_uppercase(char *str)
{
    int s = 0;
    while(s != '\0')
    {
        if (str[s] < 65 || str[s] > 90)
        {
            return 0;
        }
        s++;
    }

    return 1;
}