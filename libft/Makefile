# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 17:55:34 by dnightwi          #+#    #+#              #
#    Updated: 2019/04/11 16:58:43 by dnightwi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_*

HEAD = libft.h

DOTO = *.o

all: $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEAD)
	ar rc $(NAME) $(DOTO)
	ranlib $(NAME)
clean:
	/bin/rm -f $(DOTO)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
