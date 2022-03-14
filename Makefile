NAME = push_swap.a

CC = gcc
CFLAG = -Wall -Wextra -Werror

RM = rm -f

AR = ar
ARFLAGS = crs

INCLUDES = ./push_swap.h

SRCS = operations/ft_pa.c \
         operations/ft_pb.c \
         operations/ft_ra.c \
         operations/ft_rb.c \
         operations/ft_rr.c \
         operations/ft_rra.c \
         operations/ft_rrb.c \
         operations/ft_rrr.c \
         operations/ft_sa.c \
         operations/ft_sb.c \
         operations/ft_ss.c \
         utils/ft_atoi.c \
         utils/ft_split.c \
         utils/list_add_front.c \
         utils/list_add_last.c \
         utils/list_remove.c \
		 utils/list_clear.c \
         check_argument.c \
         ft_normalize.c \
         ft_parsing.c \
         ft_sort.c \
         ft_tab.c \
         ft_push_swap.c

SRCS = $(SRCS)

OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean :
    $(RM) $(RMFLAG) $(OBJS)

fclean : clean
    $(RM) $(RMFLAG) $(NAME)

re : fclean all

$(NAME) : $(OBJS)
    $(AR) $(ARFLAG) $@ $^

.PHONY : all clean fclean re