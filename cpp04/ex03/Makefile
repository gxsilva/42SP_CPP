# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/01 23:13:42 by lsilva-x          #+#    #+#              #
#    Updated: 2025/06/05 14:53:21 by lsilva-x         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_PWD = ./src

SRC_FILES = $(SRC_PWD)/Character.cpp \
			$(SRC_PWD)/Cure.cpp \
			$(SRC_PWD)/Ice.cpp \
			$(SRC_PWD)/AMateria.cpp \
			$(SRC_PWD)/MateriaSource.cpp \

SRC = main.cpp $(SRC_FILES)

OBJ = $(SRC:.cpp=.o)
NAME = materials

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