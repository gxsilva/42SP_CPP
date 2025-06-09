/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:19:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 18:35:15 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
: Animal(), _catBrain(new Brain())
{
	std::cout << "[Cat]: Default constructor called" << std::endl;
	this->type = "Cat";

	return ;
}

Cat::Cat(const Cat& other)
: Animal(), _catBrain(new Brain())
{
	std::cout << "[Cat]: Copy constructor called" << std::endl;
	this->type = other.type;

	return ;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "[Cat]: Assign constructor called" << std::endl;
	if (this != &other)
	{
		this->_catBrain = other._catBrain; //deep copy operator
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat]: Destructor constructor called" << std::endl;
	if (this->_catBrain)
		delete (this->_catBrain);
	return ;
}
void Cat::makeSound(void) const
{
	std::cout << "[Cat]: Meow! Meow!" << std::endl;
	return ;
}

