# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 22:15:33 by ygil              #+#    #+#              #
#    Updated: 2022/03/17 19:26:24 by ygil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAG = -Wall -Wextra -Werror
NAME = push_swap.a

RM = rm -f

AR = ar
ARFLAGS = cr

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
	   utils/list_create_node.c \
	   utils/list_init.c \
	   utils/ft_strlcpy.c \
	   utils/ft_isdigit.c \
	   utils/ft_isspace.c \
       check_argument.c \
       ft_format.c \
       ft_parsing.c \
       ft_sort.c \
       ft_tab.c \
       push_swap.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

.c.o: $(SRCS)
		$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
