CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = \
	main.c \
	test_00.c \
	test_01.c \
	test_02.c \
	print_00.c \
	print_01.c \
	print_02.c

OBJS := $(SRCS:%.c=obj/%.o)

all: run

run: $(OBJS) ../libft.a
	$(CC) $(CFLAGS) $(OBJS) ../libft.a -lbsd -o run
	./run 3

obj/%.o: %.c
	mkdir -p obj
	$(CC) $(CFLAGS) -c $^ -o $@

fclean: clean
	rm -f run
clean:
	rm -rf obj
re: fclean all
.PHONY: all clean fclean re