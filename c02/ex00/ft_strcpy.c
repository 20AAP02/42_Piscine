char *ft_strcpy(char *dest, char *src)
{
    int s = 0;
    while(src[s] != '\0')
    {
        dest[s] = src[s];
        s++;
    }

    return dest;
}