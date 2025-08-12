# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/10 15:22:49 by lsilva-x          #+#    #+#              #
#    Updated: 2025/08/12 02:47:18 by lsilva-x         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

SRC =	main.cpp \
		Data.cpp \
		Serializer.cpp
		
OBJ = $(SRC:.cpp=.o)
NAME = Serializer

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