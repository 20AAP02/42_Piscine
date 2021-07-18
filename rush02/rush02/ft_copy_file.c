#include "rush_h_02.h"

char *copy_file_to_str(char *file_name, char *str)
{
    int fd;
    int n;
    int index;

    fd = open(file_name, O_RDONLY);
    if (n != -1)
    {
        index = 0;
        n = read(fd, &str[index], sizeof(char));
        while (n != 0)
        {
            if (str[index] != ' ')
                index++;
            n = read(fd, &str[index], sizeof(char));
        }
    }
    return (str);
}