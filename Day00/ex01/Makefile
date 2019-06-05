# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 17:16:37 by ksiziva           #+#    #+#              #
#    Updated: 2019/06/05 17:16:40 by ksiziva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

COMPILE = g++ 

FLAGS = -Wall -Wextra -Werror

FILES = phonebook.cpp

all : $(NAME)

$(NAME) :
	$(COMPILE) $(FILES) $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

