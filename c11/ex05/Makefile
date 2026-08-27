
NAME = do-op
 
SRCS = main.c ops.c utils.c
OBJS = $(SRCS:.c=.o)
 
CC = cc
CFLAGS = -Wall -Wextra -Werror
 
all: $(NAME)
 
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
 
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
 
clean:
	rm -f $(OBJS)
 
fclean: clean
	rm -f $(NAME)
 
re: fclean all
 
.PHONY: all clean fclean re
