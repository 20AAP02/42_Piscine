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

int	main(int argc, char *argv[])
{
	char	file_name[100];
	int		size;
	char	*dict;
	char	to_find[40];

	if (argc == 2)
	{
		ft_strcpy(file_name, "numbers.dict");
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
	find_number_1(to_find, dict);
	ft_putchar('\n');
	return (0);
}
