/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:19:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 18:35:07 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
: Animal(), _dogBrain(new Brain())
{
	std::cout << "[Dog]: Default constructor called" << std::endl;
	this->type = "Dog";

	return ;
}

Dog::Dog(const Dog& other)
: Animal(), _dogBrain(new Brain())
{
	std::cout << "[Dog]: Copy constructor called" << std::endl;
	this->type = other.type;

	return ;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "[Dog]: Assign constructor called" << std::endl;
	if (this != &other)
	{
		this->_dogBrain = other._dogBrain;
		this->type = other.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog]: Destructor constructor called" << std::endl;
	if (this->_dogBrain)
		delete (this->_dogBrain);
	return ;
}
void Dog::makeSound(void) const
{
	std::cout << "[Dog]: Woof! Woof!" << std::endl;
	return ;
}

