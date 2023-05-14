# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Tessa <Tessa@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/01/11 14:02:46 by Tessa         #+#    #+#                  #
#    Updated: 2023/05/14 17:07:38 by Tessa         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

GREEN =			\033[38;5;2m
NORMAL =		\033[38;5;255m
RED =			\033[38;5;1m

NAME_M =		push_swap
NAME_BONUS =	checker
VPATH =			./src ./bonus
DIR_OBJ =		./obj

SRCS_M =		main.c

SRCS =			info_init.c \
				utils.c \
				operations.c \
				pre_sort.c \
				sort_small.c \
				sort_big.c

BONUS =			checker.c

OFILES =	$(addprefix $(DIR_OBJ)/, $(SRCS:.c=.o) $(SRCS_M:.c=.o))
BFILES =	$(addprefix $(DIR_OBJ)/, $(SRCS:.c=.o) $(BONUS:.c=.o))


HEADER =	./libft \

CC =		gcc
RM =		rm -f
CFLAGS =	-Wall -Wextra -Werror -g

ifdef WITH_BONUS
OBJS = $(BFILES)
NAME = $(NAME_BONUS)
else
OBJS = $(OFILES)
NAME = $(NAME_M)
endif

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADER)
			make -C libft/
			$(CC) $(CFLAGS) -Llibft -lft -o $(NAME) $(OBJS) 
			@echo "$(GREEN)Successfully compiled!$(NORMAL)"

$(DIR_OBJ)/%.o: %.c
			@echo "$(GREEN)Compiling:$(NORMAL)"
			mkdir -p $(DIR_OBJ)
			$(CC) $(CFLAGS) -Ilibft -c $< -o $@
			
bonus:
			rm -f $(SRCS_M:.c=.o)
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
			$(RM) $(NAME_M) $(NAME_BONUS)
			@echo "$(GREEN)Successfully removed libraries!$(NORMAL)"

re:			fclean all

.PHONY:		all clean fclean re bonus





