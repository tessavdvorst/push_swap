# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Tessa <Tessa@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/01/11 14:02:46 by Tessa         #+#    #+#                  #
#    Updated: 2022/04/13 15:20:33 by tvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

GREEN = 	\033[38;5;2m
NORMAL = 	\033[38;5;255m
RED = 		\033[38;5;1m

NAME =     	push_swap
VPATH = 	./src
DIR_OBJ =	./obj

SRCS = 		push_swap.c \
			info_init.c \
			list_test.c \
			operations.c \
			sort.c

BONUS =	

OFILES =    $(addprefix $(DIR_OBJ)/, $(SRCS:.c=.o))
BFILES =	$(addprefix $(DIR_OBJ)/, $(BONUS:.c=.o))


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
			$(CC) -Llibft -lft -o $(NAME) $(OBJS) $(CFLAGS) 
			@echo "$(GREEN)Successfully compiled!$(NORMAL)"

$(DIR_OBJ)/%.o: %.c
			@echo "$(GREEN)Compiling:$(NORMAL)"
			mkdir -p $(DIR_OBJ)
			$(CC) -Ilibft -c $< -o $@ $(CFLAGS)
			
bonus:
			make WITH_BONUS=1 all

clean:
			@echo "$(RED)Removing all object files...$(NORMAL)"
			$(RM) -d -r $(DIR_OBJ)
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





