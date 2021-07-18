CFLAGS = -Wall -Wextra -Wextra
TARGET = rush-02
SRCDIR = blocks.c\blocks1_2.c\blocks1.c\find_number1.c\find_number.c\find_print_word_in_dict.c\ft_copy_file.c\ft_file_size.c\ft_putchar.c\ft_putstr.c\ft_strcpy.c\ft_strlen.c\ft_strstr.c\pass_in_the_zeros.c\rush.c\strstr_int.c
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(SRCS:.c=.o)
all: $(TARGET)
%.o: %.c
    gcc $(CFLAGS) -c $< -o  $@ -I
$(TARGET): $(OBJS)
    gcc $(CFLAGS) -o $@ $^
clean:
    rm -f $(OBJS)
fclean: clean
    rm -f $(TARGET)
re: fclean all