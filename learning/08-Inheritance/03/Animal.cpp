/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:36:41 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 16:16:47 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
: Heart(10),
_animalSpecie("Generic"),
_animalFurColor("Multi Color"),
_animalTypeFood("Any")
{
	std::cout << "Animal Default constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string animalSpeci, std::string animalFurColor, std::string animalTypeFood )
: Heart(20),
_animalSpecie(animalSpeci),
_animalFurColor(animalFurColor),
_animalTypeFood(animalTypeFood)
{
	std::cout << "Animal Parameterized constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &other)
: Heart(other),
_animalSpecie(other.getAnimalSpecie()),
_animalFurColor(other.getAnimalFurColor()),
_animalTypeFood(other.getAnimalTypeFood())

{
	std::cout << "Animal Copy constructor called" << std::endl;
	return ;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal Assignment operator called" << std::endl;
	if (this != &other)
	{
		Heart::operator=(other);
		this->_animalFurColor = other.getAnimalFurColor();
		this->_animalSpecie = other.getAnimalSpecie();
		this->_animalTypeFood = other.getAnimalTypeFood();
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
	return ;
}

