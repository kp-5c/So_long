# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 09:52:46 by ebenoist          #+#    #+#              #
#    Updated: 2025/06/26 08:36:07 by ebenoist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= cc

CFLAGS	= -Wall -Werror -Wextra 

AR		= ar

ARFLAGS	= rcs

SRC		=	ft_atoi.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_printf.c\
			ft_putchar.c\
			ft_putnbr_hexa.c\
			ft_putnbr_unsigned.c\
			ft_putnbr.c\
			ft_putstr.c\
			get_next_line.c\
			get_next_line_utils.c\
			
BONUS_SRC =	ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c
			
OBJ		= $(SRC:.c=.o)
BONUS_OBJ  = $(BONUS_SRC:.c=.o)

all : $(NAME) 

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

bonus: $(BONUS_OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(BONUS_OBJ) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
