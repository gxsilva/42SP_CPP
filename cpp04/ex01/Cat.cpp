/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:19:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/30 02:33:18 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
: Animal(), _catBrain(new Brain())
{
	std::cout << "[Cat]: Default constructor called" << std::endl;
	this->setType("Cat");
	return ;
}

Cat::Cat(const Cat& other)
: Animal(), _catBrain(new Brain())
{
	std::cout << "[Cat]: Copy constructor called" << std::endl;
	this->setType(other.getType());
	return ;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "[Cat]: Assign constructor called" << std::endl;
	if (this != &other)
	{
		if (this->_catBrain) //delete the oldest brain (if it already exist)
			delete (this->_catBrain);
		this->_catBrain = new Brain(*other._catBrain);
		this->setType(other.getType());
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

