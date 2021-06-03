# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 19:53:54 by throdrig          #+#    #+#              #
#    Updated: 2021/06/02 15:43:37 by throdrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror 
LIB1		= ar -rcs # cria o arquivo libft.a
LIB2		= ranlib # indexação na biblioteca
RM			= rm -rf
NAME		= libft.a

SRCS		= ft_isalpha.c		ft_isdigit.c	ft_isascii.c	ft_isalnum.c	ft_isprint.c	\
			  ft_toupper.c		ft_tolower.c	ft_atoi.c		ft_strncmp.c	ft_strnstr.c	\
			  ft_strlen.c		ft_strrchr.c	ft_strchr.c		ft_strlcat.c	ft_strlcpy.c	\
			  ft_putnbr_fd.c	ft_putendl_fd.c	ft_putstr_fd.c	ft_putchar_fd.c	ft_strmapi.c	\
			  ft_bzero.c		ft_calloc.c		ft_memcpy.c		ft_memccpy.c	ft_memchr.c		\
			  ft_memcmp.c		ft_memmove.c	ft_strdup.c		ft_memset.c		ft_itoa.c		\
			  ft_split.c		ft_strjoin.c	ft_strtrim.c	ft_substr.c		
			  
			  
OBJS		= $(SRCS:.c=.o)
INCLUDE		= .

PROGRAM		= main.out

all:		msg $(NAME)

msg:		
			@echo "Compiling ..."

.c.o:
			@$(CC) $(CFLAGS) -c -I $(INCLUDE) $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			@$(LIB1) $(NAME) $(OBJS)
			@$(LIB2) $(NAME)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME) $(PROGRAM)

compile:	fclean all
			@$(CC) -static main.c -L . -I $(INCLUDE) -lft $(CFLAGS) -lbsd -o $(PROGRAM)

re:			fclean all

norme:		
			norminette ft_*.c

.PHONY:		all clean fclean re compile .c.o $(NAME)