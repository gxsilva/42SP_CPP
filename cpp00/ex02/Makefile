# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 14:46:48 by lsilva-x          #+#    #+#              #
#    Updated: 2025/05/20 16:53:01 by lsilva-x         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CPPFLAGS = -std=c++98

SRC =	Account.cpp \
		tests.cpp \

OBJ = $(SRC:.cpp=.o)
NAME = Account

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