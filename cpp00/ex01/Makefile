# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 14:46:48 by lsilva-x          #+#    #+#              #
#    Updated: 2025/05/16 19:16:49 by lsilva-x         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CPPFLAGS = -std=c++98

SRC = ./Contact.cpp \
		main.cpp \
		PhoneBook.cpp \

OBJ = $(SRC:.cpp=.o)
NAME = phoneBook

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