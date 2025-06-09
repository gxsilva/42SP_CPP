/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:47:01 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 16:45:10 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
: type("Unset animal type")
{
	std::cout << "[WrongAnimal]: Default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
: type(other.getType())
{
	std::cout << "[WrongAnimal]: Copy constructor called" << std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "[WrongAnimal]: Assign constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[WrongAnimal]: Destructor constructor called" << std::endl;
	return ;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "The class must be instantiated by an animal to have a sound" << std::endl;
	return ;
}

const std::string& WrongAnimal::getType(void) const
{ return (this->type); }

void WrongAnimal::setType(std::string animalType)
{ this->type = animalType; }

