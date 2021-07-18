#if !defined(RUSH_H_02)
#define RUSH_H_02

#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
//#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_strstr(char *str, char *to_find);
int ft_strlen(char *str);
char *ft_strcpy(char *dest, char *src);
void ft_putstr(char *str);
void ft_putchar(char c);
int file_size(char *name);
char *copy_file_to_str(char *file_name, char *str);
void find_print_word_in_dict(char *number);
void pass_in_the_zeros(char *str, int zeros_count);
void find_number(char *number, char *dict);

#endif // RUSH_H_02