NAME = libftprintf.a
CC = cc -Wall -Wextra -Werror
INCLUDE_DIR = ./
SRCS = ft_printf.c handling_data.c checking_format.c \
	   form_c.c form_s.c form_p.c form_d_i.c form_u.c form_x_X.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	make -C libft
	cp libft/libft.a ./$(NAME)
	ar -crs $@ $^
	#ranlib libftprintf.a

.c.o : $(SRCS)
	$(CC) -I$(INCLUDE_DIR) -c -o $@ $<

clean :
	make clean -C libft
	rm -f $(OBJS)

fclean : clean
	rm -f libft/libft.a
	rm -f $(NAME)

re : fclean
	make all

.PHONY : all clean fclean re
