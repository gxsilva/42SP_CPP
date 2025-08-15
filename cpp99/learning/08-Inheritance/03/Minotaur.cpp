/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minotaur.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:36:41 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 18:23:19 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minotaur.hpp"

Minotaur::Minotaur(void)
: Heart(),
Human(),
Animal(),
_minotaurName("Unnamed Minotaur"),
_minotaurWeapon("Non Weapon"),
_minotaurPosition("unemployed")
{
	std::cout << "Minotaur Default constructor called" << std::endl;
	return ;
}

Minotaur::Minotaur(std::string minotaurName, std::string minotaurWeapon, std::string minotaurPosition)
: Heart(200),
Human("Marcolino", 150, true),
Animal("minotaurs", "purple", "carnivore"),
_minotaurName(minotaurName),
_minotaurWeapon(minotaurWeapon),
_minotaurPosition(minotaurPosition)
{
	std::cout << "Minotaur Parameterized constructor called" << std::endl;
	return ;
}
Minotaur::Minotaur(const Minotaur &other)
:  Heart(other),
Human(other),
Animal(other),
_minotaurName(other.getMinotaurName()),
_minotaurWeapon(other.getMinotaurWeapon()),
_minotaurPosition(other.getMinotaurPosition())
{
	std::cout << "Minotaur Copy constructor called" << std::endl;
	return ;
}

Minotaur &Minotaur::operator=(const Minotaur &other)
{
	std::cout << "Minotaur Assignment operator called" << std::endl;
	if (this != &other)
	{
		Heart::operator=(other);
		Human::operator=(other);
		Animal::operator=(other);
		this->_minotaurName = other.getMinotaurName();
		this->_minotaurWeapon = other.getMinotaurWeapon();
		this->_minotaurPosition = other.getMinotaurPosition();
	}
	return (*this);
}

Minotaur::~Minotaur(void)
{
	std::cout << "Minotaur Destructor called" << std::endl;
	return ;
}

