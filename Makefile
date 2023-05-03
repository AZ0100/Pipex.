NAME = pipex

CC = cc

CFLAGS += -Wall -Werror -Wextra -I Includes

LIBFT  = libft/ft_strlen.c libft/ft_strncmp.c libft/ft_strrchr.c\
	libft/ft_substr.c libft/ft_split.c libft/ft_strjoin.c\
	libft/ft_memset.c libft/ft_calloc.c libft/ft_strdup.c\

SRCS = Sources/main.c Sources/child1.c Sources/child2.c Utils/error_message.c Utils/get_path.c  Utils/without_exit.c

OBJS = $(SRCS:.c=.o) $(LIBFT:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)  

clean :
		@rm -rf $(OBJS) 

fclean : clean 
		@rm -rf $(NAME) 

re : fclean all