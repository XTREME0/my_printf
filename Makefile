NAME := libftprintf.a
SRCS := ./ft_printf.c \
	./ft_printf_utils.c \
	./ft_printf_utils2.c \
	./exec.c \

OBJS = $(SRCS:.c=.o)
CFLAGS := -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJS)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<
	ar rcs $(NAME) $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean
