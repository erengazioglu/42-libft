CC = cc
CFLAGS = -Wall -Werror -Wextra -g

NAME = libft.a
SRCS = \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strncmp.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_strdup.c \
	ft_memcpy.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_memmove.c \
	ft_memset.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strmapi.c \
	ft_strtrim.c \
	ft_substr.c
SRCS_BONUS = \
	ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c
SRCS_EXTRA = \
	ft_itoa_base.c \
	ft_itoa_uint.c
SRCS_PRINTF = \
	printf_ptr.c \
	padding_int.c \
	printf_str.c \
	printf_percent.c \
	ft_printf.c \
	printf_hex.c \
	helpers.c \
	ft_lstsize.c \
	padding_str.c \
	printf_int.c \
	printf_uint.c \
	printf_char.c \
	parse.c 

OBJS := $(SRCS:src/base/%.c=obj/%.o)
OBJS_BONUS := $(SRCS_BONUS:src/base_bonus/%.c=obj/%.o)
OBJS_EXTRA := $(SRCS_EXTRA:src/extra/%.c=obj/%.o)
OBJS_PRINTF := $(SRCS_PRINTF:src/ft_printf/%.c=obj/%.o)

all: $(NAME) bonus extra printf

$(NAME): $(OBJS)
	ar crs $@ $^

bonus: $(OBJS_BONUS)
	ar crs $(NAME) $^

extra: $(OBJS_EXTRA)
	ar crs $(NAME) $^

printf: $(OBJS_PRINTF)
	ar crs $(NAME) $^

obj/%.o: %.c
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $^ -o $@

fclean: clean
	rm -f $(NAME)
clean:
	rm -rf obj
re: fclean all
.PHONY: all clean fclean re
