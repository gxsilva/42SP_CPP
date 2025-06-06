/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:58:00 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/30 03:02:40 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void)
: type("Unset animal type")
{
	std::cout << "[Animal]: Default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal& other)
: type(other.getType())
{
	std::cout << "[Animal]: Copy constructor called" << std::endl;
	return ;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
	std::cout << "[Animal]: Assign constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "[Animal]: Destructor constructor called" << std::endl;
	return ;
}

void AAnimal::makeSound(void) const
{
	std::cout << "The class must be instantiated by an animal to have a sound" << std::endl;
	return ;
}

const std::string& AAnimal::getType(void) const
{ return (this->type); }

void AAnimal::setType(std::string animalType)
{ this->type = animalType; }
