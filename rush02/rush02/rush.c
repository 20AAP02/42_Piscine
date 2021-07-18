#include "rush_h_02.h"

void find_print_word_in_dict(char *number)
{
    while (*number != '\n')
    {
        while (*number < 97 || *number > 122)
        {
            number++;
        }
        while (*number >= 97 && *number <= 122)
        {
            ft_putchar(*number);
            number++;
        }
    }
}

void pass_in_the_zeros(char *str, int zeros_count)
{
    int x;

    x = 1;
    while (x < zeros_count)
    {
        str[x] = '0';
        x++;
    }
    str[x] = '\0';
}

void find_number(char *number, char *dict)
{
    int zeros_count;
    char *str;
    int index;
    char *to_find;

    str = malloc(sizeof(char) * 40);
    zeros_count = ft_strlen(number);
    index = 0;
    while (number[index] != '\0')
    {
        if (number[index] != '0')
        {
            str[0] = number[index];
            if (zeros_count > 2)
            {
                str[1] = '\0';
                to_find = ft_strstr(dict, str);
                if (to_find != NULL)
                {
                    find_print_word_in_dict(to_find);
                    ft_putchar('-');
                }
                else
                    ft_putstr("Dict Error\n");
                str[0] = '1';
            }
            pass_in_the_zeros(str, zeros_count);
            to_find = ft_strstr(dict, str);
            if (to_find != NULL)
                find_print_word_in_dict(to_find);
            else
                ft_putstr("Dict Error\n");
            if (number[index + 1] != '\0')
                ft_putchar('-');
        }
        zeros_count--;
        index++;
    }
}

int main(int argc, char *argv[])
{
    char *origin_file = "numbers.dict";
    char file_name[100];
    int size;
    char *dict;
    char to_find[40];

    if (argc == 2)
    {
        ft_strcpy(file_name, origin_file);
        ft_strcpy(to_find, argv[1]);
    }
    else if (argc == 3)
    {
        ft_strcpy(file_name, argv[1]);
        ft_strcpy(to_find, argv[2]);
    }
    else
        return (0);
    size = file_size(file_name);
    dict = malloc(sizeof(char) * size);
    if (dict == NULL)
        return (0);
    copy_file_to_str(file_name, dict);
    find_number(to_find, dict);
    return (0);
}
