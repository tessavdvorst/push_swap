# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tvan-der <tvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/08 12:03:47 by tvan-der      #+#    #+#                  #
#    Updated: 2022/05/06 15:33:20 by tvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_strlcpy.c \
			ft_isalnum.c \
			ft_strlen.c	\
			ft_strcmp.c	\
			ft_strncmp.c \
			ft_ccmp.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_atoi.c \
			ft_atof.c \
			ft_strchr.c	\
			ft_strrchr.c \
			ft_memchr.c	\
			ft_strnstr.c \
			ft_strlcat.c \
			ft_memcmp.c	\
			ft_memcpy.c	\
			ft_bzero.c \
			ft_memset.c	\
			ft_memmove.c \
			ft_calloc.c	\
			ft_strdup.c	\
			ft_memccpy.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_split.c \
			ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstiter.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstdelone.c \
			ft_lstfree.c \
			ft_lstprint.c \
			ft_lstclear.c \
			ft_create_node.c \
			ft_create_list.c \
			ft_lst_insert_back.c \
			ft_printf.c \
			ft_printf_char.c \
			ft_printf_num.c \
			get_next_line.c \
			get_next_line_utils.c

DIR_OBJ =	./obj
OBJS	=	$(addprefix $(DIR_OBJ)/, $(SRCS:.c=.o))
LIBC	=	ar -rcs
FLAGS	=	-Wall -Wextra -Werror
RM		= 	rm -f
all: $(NAME)

$(NAME):	$(OBJS)
			${LIBC} $(NAME) $(OBJS)

$(DIR_OBJ)/%.o: %.c
			mkdir -p $(DIR_OBJ)
			${CC} ${FLAGS} -c $< -o $@

clean:
			$(RM) -d -r $(DIR_OBJ)

fclean:		clean
			${RM} $(NAME)

re:			fclean all
