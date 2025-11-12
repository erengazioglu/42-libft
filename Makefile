CC = cc
CFLAGS = -Wall -Werror -Wextra
.SUFFIXES: 

NAME = libft.a
DEPS = \
	libft.h
SRCS = \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_strlen.c \
	ft_atoi.c \
	ft_strncmp.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_bzero.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_memcpy.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_memmove.c

OBJS := $(SRCS:%.c=obj/%.o)

all: $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

$(NAME): $(OBJS)
	ar crs $@ $^

obj/%.o: %.c
	mkdir -p obj
	$(CC) $(CFLAGS) -c $^ -o $@

fclean: clean
	rm -f $(NAME)
clean:
	rm -rf obj
re: fclean all
.PHONY: all clean fclean re
