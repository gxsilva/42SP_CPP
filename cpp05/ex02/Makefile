# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/10 15:22:49 by lsilva-x          #+#    #+#              #
#    Updated: 2025/08/10 22:49:00 by lsilva-x         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

SRC_PWD = ./src
SRC_FILES = $(SRC_PWD)/AForm.cpp \
			$(SRC_PWD)/Bureaucrat.cpp \
			$(SRC_PWD)/ShrubberyCreationForm.cpp \
			$(SRC_PWD)/RobotomyRequestForm.cpp \
			$(SRC_PWD)/PresidentialPardonForm.cpp

DIR_OBJ = ./obj
SRC = main.cpp $(SRC_FILES)
OBJ = $(SRC:$(SRC_PWD)/%.cpp=$(DIR_OBJ)/%.o)
NAME = abstraction

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

$(DIR_OBJ)/%.o: %.cpp
	@mkdir -p $(DIR_OBJ)
	$(CC) $(CPPFLAGS) -c $< -o $@

$(DIR_OBJ)/%.o: $(SRC_PWD)/%.cpp
	@mkdir -p $(DIR_OBJ)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(DIR_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re