/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:19:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 16:41:43 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
: Animal()
{
	std::cout << "[Dog]: Default constructor called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog& other)
: Animal()
{
	std::cout << "[Dog]: Copy constructor called" << std::endl;
	this->type = other.type;
	return ;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "[Dog]: Assign constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog]: Destructor constructor called" << std::endl;
	return ;
}
void Dog::makeSound(void) const
{
	std::cout << "[Dog]: Woof! Woof!" << std::endl;
	return ;
}

