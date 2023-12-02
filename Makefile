# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 14:34:12 by iez-zagh          #+#    #+#              #
#    Updated: 2023/11/12 12:39:18 by iez-zagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR =  ar -r
RM = rm -f
 
FILE  = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      	ft_strlen.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_toupper.c \
		ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c \
		
BFILES  = ft_lstnew.c ft_lstadd_front.c	ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		  ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BOBJECTS	=	$(BFILES:c=o)
OBJECTS		=	$(FILE:c=o)

%.o: %.c libft.h
	@echo "DOUZ-NTA"
	$(CC) $(CFLAGS) -c $<
	

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

bonus: $(BOBJECTS)
	$(AR) $(NAME) $(BOBJECTS)

clean:
	@echo "HGEYRHA-AKHAY-MESTAFA"
	$(RM) $(OBJECTS) $(BOBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
