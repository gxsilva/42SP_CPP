/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:58:00 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 18:34:57 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
: type("Unset animal type")
{
	std::cout << "[Animal]: Default constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal& other)
: type(other.getType())
{
	std::cout << "[Animal]: Copy constructor called" << std::endl;
	return ;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "[Animal]: Assign constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "[Animal]: Destructor constructor called" << std::endl;
	return ;
}

void Animal::makeSound(void) const
{
	std::cout << "The class must be instantiated by an animal to have a sound" << std::endl;
	return ;
}

const std::string& Animal::getType(void) const
{ return (this->type); }
