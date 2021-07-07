char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int s = 0;
    while(s < n && src[s] != '\0')
    {
        dest[s] = src[s];
        s++;
    }

    return dest;
}