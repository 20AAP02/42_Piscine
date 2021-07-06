char *ft_strupcase(char *str)
{
    int s = 0;
    while(s != '\0')
    {
        if (str[s] < 123 && str[s] > 96)
        {
            str[s] = str[s] - 32;
        }
        s++;
    }

    return str;
}