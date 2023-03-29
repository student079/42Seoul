# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 02:36:21 by jinsjeon          #+#    #+#              #
#    Updated: 2023/03/29 16:41:22 by jinsjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= cc
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror

SRCS		= ft_printf.c ft_printf_utils.c ft_printf_utils2.c ft_print_c.c \
			ft_print_d.c ft_print_i.c ft_print_p.c ft_print_s.c \
			ft_print_u.c ft_print_bx.c ft_print_sx.c

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

%.o : %.c
		${CC} ${CFLAGS} -c -o $@ $<

$(NAME):	$(OBJS)
				ar crs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
