#include <unistd.h>

void *addr = "Bonjour les aminches...c est fo u.tout.ce qu on peut faire avec...print_memory....lol.lol. .";

/*void *ft_print_memory(void *addr, unsigned int size)
{
    if (size == 0)
    {
        return addr;
    }
    int n = 0;
    while(n < 16)
    {
        n++;
    }
}*/

void return_test(void *addr)
{
    char *i = &addr;
    int x = 0;
    while (x < 16)
    {
        write(1, &i, 1);
        x++;
    }
}

int main()
{
    return_test(addr);
}