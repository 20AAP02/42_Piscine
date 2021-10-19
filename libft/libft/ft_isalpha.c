int ft_isalpha(int x)
{
    if (x > 64 && x < 91)
        return 1;
    else if (x > 96 && x < 123)
        return 1;
    else
        return 0;
}
