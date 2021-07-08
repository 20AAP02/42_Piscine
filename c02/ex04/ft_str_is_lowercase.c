int ft_str_is_lowercase(char *str)
{
    int s = 0;
    while(s != '\0')
    {
        if (str[s] < 97 || str[s] > 122)
        {
            return 0;
        }
        s++;
    }

    return 1;
}