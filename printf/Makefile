CFLAGS = -Wall -Wextra -Werror -c

SOURCES = ft_printf.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putunbr_fd.c ft_strlen.c ft_numlen.c ft_unumlen.c ft_hexlen.c ft_puthex_fd.c ft_putcaphex_fd.c ft_putmemory_fd.c

OBJECTS = ${SOURCES:.c=.o}

NAME = libftprintf.a


all: ${NAME}

.c.o:
	cc $(CFLAGS) $< -o ${<:.c=.o}

${NAME}: ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all
