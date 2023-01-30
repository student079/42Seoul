NAME		= libftprintf.a

CC 			= cc
RM 			= rm -rf
CFLAGS 		= -Wall -Wextra -Werror

SRCS 		= 
OBJS 		= $(SRCS: .c=.o)

all:		$(NAME)

.c.o:	
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
				ar crs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re

