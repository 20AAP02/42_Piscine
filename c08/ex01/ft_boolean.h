#ifndef	 FT_H
# define FT_H

#include <unistd.h>
#define TRUE 1
#define t_bool int
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0

int EVEN(int nbr)
{
    if (nbr % 2 == 0)
        return 1;
    return 0;
}

#endif