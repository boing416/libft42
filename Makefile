# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 11:23:15 by mnurkass          #+#    #+#              #
#    Updated: 2019/05/02 17:02:56 by mnurkass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memmove.c ft_strcat.c ft_strjoin.c ft_itoa.c ft_max.c ft_min.c 


OBJ = ft_memmove.o ft_strcat.o ft_strjoin.o ft_itoa.o ft_max.o ft_min.o 
INCLUDE = libft.h

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC) -I $(INCLUDE)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
