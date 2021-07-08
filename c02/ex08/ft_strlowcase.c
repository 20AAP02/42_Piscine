char *ft_strlowcase(char *str)
{
    int s = 0;
    while(s != '\0')
    {
        if (str[s] > 64 && str[s] < 91)
        {
            str[s] = str[s] + 32;
        }
        s++;
    }

    return str;
}