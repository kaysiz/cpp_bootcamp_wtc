# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 17:13:49 by ksiziva           #+#    #+#              #
#    Updated: 2019/06/03 17:13:55 by ksiziva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

COMPILE = g++ 

FLAGS = -Wall -Wextra -Werror

FILES = megaphone.cpp

all : $(NAME)

$(NAME) :
		$(COMPILE) $(FILES) $(FLAGS) -o $(NAME)

clean:
		rm -f $(NAME)

fclean: clean

re: fclean all
