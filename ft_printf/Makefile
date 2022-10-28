Name = ft_printf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rsc
RM = rm -f

SRCS = \
	   ft_printf.c \
	   ft_printf2.c

SRCS_B = \
		 ft_bonus.c

OBJS = $(SRCS:.c =.o)
OBJS_B = $(SRCS_B:.c=.o)

ifdef IS_BONUS
	OBJECTS = $(OBJS) $(OBJS_B)
else
	OBJECTS = $(OBJS)
endif

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I. -c $<

$(NAME): $(OBJECTS)
	$(AR) $(ARFLAGS) $(NAME) $^

bonus:
	make IS_BONUS=1 all

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
