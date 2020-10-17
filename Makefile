# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/09 01:18:55 by saoyama           #+#    #+#              #
#    Updated: 2020/10/15 20:24:07 by saoyama          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c	  \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c	  \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c	  \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c  \
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c 		  \
			ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_itoa.c ft_split.c

OBJS	=	$(SRCS:.c=.o)
INCS	=	./
CC		=	gcc
LIBC	=	ar r
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

.c.o :
		$(CC) $(CFLAGS) -c $(<) -o $(<:.c=.o) -I$(INCS)

$(NAME) : $(OBJS)
		$(LIBC) $(NAME) $(OBJS)

all : $(NAME)

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all

so :
		$(CC) -shared $(SRCS) -o libft.so

.PHONY : all clean fclean re .c.o
