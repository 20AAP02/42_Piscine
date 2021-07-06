int check_if_letter(char a)
{
    if (a < 65 || a > 90 && a < 97 || a > 122)
    {
        return 1;
    }
    return 0;
}

char *ft_strcapitalize(char *str)
{
    int s = 0;
    while (str[s] != '\0')
    {
        if (str[s] < 123 && str[s] > 96)
        {
            if (s == 0 || check_if_letter(str[s - 1]) == 1)
            {
                str[s] = str[s] - 32;
            }
        }
        s++;
    }

    return str;
}
