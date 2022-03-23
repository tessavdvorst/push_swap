# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Tessa <Tessa@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/01/11 14:02:46 by Tessa         #+#    #+#                  #
#    Updated: 2022/03/23 17:07:52 by tvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

GREEN = 	\033[38;5;2m
NORMAL = 	\033[38;5;255m
RED = 		\033[38;5;1m

NAME =      	push_swap	
VPATH = ./src

SRCS = 		push_swap.c

BONUS =	

OFILES =    $(SRCS:.c=.o)
BFILES =	$(BONUS:.c=.o)

HEADER =  	./libft \

CC = 		gcc
RM = 		rm -f
CFLAGS = 	-Wall -Wextra -Werror

ifdef WITH_BONUS
OBJS = $(BFILES)
else
OBJS = $(OFILES)
endif

all:        $(NAME)

$(NAME):	$(OBJS) $(HEADER)
			make -C libft/
			cp libft/libft.a .
			$(CC) -Llibft -lft -o $(NAME) $(OBJS) $(CFLAGS) 
			@echo "$(GREEN)Successfully compiled!$(NORMAL)"

%.o:        %.c
			@echo "$(GREEN)Compiling:$(NORMAL)"
			$(CC) -Ilibft -c $< -o $@ $(CFLAGS)
			
bonus:
			make WITH_BONUS=1 all

clean:
			@echo "$(RED)Removing all object files...$(NORMAL)"
			$(RM) $(OFILES) $(BFILES)
			make clean -C libft/
			@echo "$(GREEN)Succesfully removed all object files!$(NORMAL)"

fclean:		clean
			@echo "$(RED)Removing libraries...$(NORMAL)"
			$(RM) libft/libft.a
			$(RM) libft.a
			$(RM) $(NAME)
			@echo "$(GREEN)Successfully removed libraries!$(NORMAL)"

re:        	fclean all

.PHONY: 	all clean fclean re bonus





