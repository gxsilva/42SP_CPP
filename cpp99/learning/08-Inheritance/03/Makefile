# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/25 23:29:14 by lsilva-x          #+#    #+#              #
#    Updated: 2025/05/29 15:42:17 by lsilva-x         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CPPFLAGS = -std=c++98

SRC =	Human.cpp \
		Animal.cpp \
		Minotaur.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)
NAME = minotaur

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re