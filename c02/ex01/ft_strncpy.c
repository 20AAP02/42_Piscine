char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int s = 0;
    while(s < n)
    {
        dest[s] = src[s];
        s++;
    }

    return dest;
}