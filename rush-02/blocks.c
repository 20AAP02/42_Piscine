#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		file_size(char *name);
char	*copy_file_to_str(char *file_name, char *str);
void	find_print_word_in_dict(char *number);
void	pass_in_the_zeros(char *str, int zeros_count);
void	find_number(char *number, char *dict, int check);
int		ft_strstr_int(char *str, char *to_find);
int		find_number_1(char *number, char *dict);
void	block_8(char *g_str, char *g_to_find, char *dict);
void	block_9(char *g_str, char *number, int *g_index);
void	block_10(char *g_to_find, char *dict, char *g_str);
void	block_4(char *number, char *dict, int *index, int *zeros_count);
void	block_5(int *index, int *zeros_count);
void	block_6(char *number, char *dict, int *index);
int		block_7(int *zeros_count, char *number, char *dict);
void	block_0(char *str, char *number, int *index, char *dict);
void	block_1(int *zeros_count, char *str, char *dict, int *index);
void	block_2(char *str, int *index, char *dict, char *number);
void	block_3(int *zeros_count, char *str, char *dict, int *index);

void	block_8(char *g_str, char *g_to_find, char *dict)
{
	g_str[1] = '\0';
	g_to_find = ft_strstr(dict, g_str);
	if (g_to_find != NULL)
	{
		find_print_word_in_dict(g_to_find);
		ft_putchar(' ');
	}
	else
		ft_putstr("Dict Error\n");
	g_str[0] = '1';
}

void	block_9(char *g_str, char *number, int *g_index)
{
	g_str[1] = number[*g_index + 1];
	g_str[2] = '\0';
	*g_index += 1;
}

void	block_10(char *g_to_find, char *dict, char *g_str)
{
	g_to_find = ft_strstr(dict, g_str);
	if (g_to_find != NULL)
		find_print_word_in_dict(g_to_find);
	else
		ft_putstr("Dict Error\n");
	ft_putchar(' ');
}
