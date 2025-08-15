/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:36:41 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 16:04:31 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
: Heart(), _humanName("Unnamed"), _humanMoney(0), _humanIsAlive(true)
{
	std::cout << "Human Default constructor called" << std::endl;
	return ;
}

Human::Human(std::string humanName, int humanMoney, bool humanIsAlive)
: Heart(60), _humanName(humanName), _humanMoney(humanMoney), _humanIsAlive(humanIsAlive)
{
	std::cout << "Human Parameterized constructor called" << std::endl;
	return ;
}

Human::Human(const Human &other)
: Heart(),
_humanName(other.getHumanName()),
_humanMoney(other.getHumanMoney()),
_humanIsAlive(other.getHumanIsAlive())
{
	std::cout << "Human Copy constructor called" << std::endl;
	return ;
}

Human &Human::operator=(const Human &other)
{
	std::cout << "Human Assignment operator called" << std::endl;
	if (this != &other)
	{
		Heart::operator=(other);
		this->_humanName = other.getHumanName();
		this->_humanMoney = other.getHumanMoney();
		this->_humanIsAlive = other.getHumanIsAlive();
	}
	return (*this);
}

Human::~Human(void)
{
	std::cout << "Human Destructor called" << std::endl;
	return ;
}

