NAME = libft.a
COMPILER = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRCS =	gnl_srcs/get_next_line.c \
		gnl_srcs/get_next_line_utils.c \
		libft_srcs/libft_bonus/ft_lstadd_back.c \
		libft_srcs/libft_bonus/ft_lstadd_front.c \
		libft_srcs/libft_bonus/ft_lstclear.c \
		libft_srcs/libft_bonus/ft_lstlast.c \
		libft_srcs/libft_bonus/ft_lstnew.c \
		libft_srcs/libft_bonus/ft_lstsize.c \
		libft_srcs/ft_atoi.c \
		libft_srcs/ft_bzero.c \
		libft_srcs/ft_calloc.c \
		libft_srcs/ft_isalnum.c \
		libft_srcs/ft_isalpha.c \
		libft_srcs/ft_isascii.c \
		libft_srcs/ft_isdigit.c \
		libft_srcs/ft_isprint.c \
		libft_srcs/ft_itoa_base.c \
		libft_srcs/ft_itoa.c \
		libft_srcs/ft_memchr.c \
		libft_srcs/ft_memcmp.c \
		libft_srcs/ft_memcpy.c \
		libft_srcs/ft_memmove.c \
		libft_srcs/ft_memset.c \
		libft_srcs/ft_putchar_fd.c \
		libft_srcs/ft_putendl_fd.c \
		libft_srcs/ft_putnbr_fd.c \
		libft_srcs/ft_putstr_fd.c \
		libft_srcs/ft_split.c \
		libft_srcs/ft_strchr.c \
		libft_srcs/ft_strdup.c \
		libft_srcs/ft_striteri.c \
		libft_srcs/ft_strjoin.c \
		libft_srcs/ft_strlcat.c \
		libft_srcs/ft_strlcpy.c \
		libft_srcs/ft_strlen.c \
		libft_srcs/ft_strmapi.c \
		libft_srcs/ft_strncmp.c \
		libft_srcs/ft_strnstr.c \
		libft_srcs/ft_strrchr.c \
		libft_srcs/ft_strtrim.c \
		libft_srcs/ft_substr.c \
		libft_srcs/ft_tolower.c \
		libft_srcs/ft_toupper.c \
		libft_srcs/ft_utoa_base.c \
		printf_srcs/ft_print_char.c \
		printf_srcs/ft_print_decimal.c \
		printf_srcs/ft_print_hexa.c \
		printf_srcs/ft_print_pointer.c \
		printf_srcs/ft_print_string.c \
		printf_srcs/ft_printf.c \
		printf_srcs/ft_print_un.c

OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
	@echo "✅ libft is ready to be used$"

$(NAME): $(OBJS)
	$(COMPILER) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
	@echo "📤 Objects deleted"

fclean: clean
	rm -f $(NAME)
	@echo "🧼 All cleaned"

re:	fclean all

val: re
	valgrind --leak-check=full --show-leak-kinds=all --suppressions=supressions.supp ./$(NAME)

norm:
	@echo "$Passando a Norminette com a flag -R CheckForbiddenSourceHeader: "
	@-norminette -R CheckForbiddenSourceHeader

sanitize: fclean $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) -fsanitize=address
	./$(NAME)
