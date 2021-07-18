#include "rush_h_02.h"

int file_size(char *name)
{
    int fd;
    int n;
    int count;
    char str[1];

    fd = open(name, O_RDONLY);
    if (n != -1)
    {
        count = 0;
        n = read(fd, str, sizeof(char));
        while (n != 0)
        {
            if (*str != ' ')
                count++;
            n = read(fd, str, sizeof(char));
        }
    }
    return (count);
}