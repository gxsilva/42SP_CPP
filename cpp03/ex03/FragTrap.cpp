/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:38:03 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 15:47:10 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructors */
FragTrap::FragTrap(void)
: ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "[FragTrap]: Default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
: ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "[FragTrap]: Parameterized constructor called" << std::endl;
	return ;
}

/* Special Constructors */
FragTrap::FragTrap(int opt)
: ClapTrap()
{
	(void)opt;
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	std::cout << "[FragTrap]: Default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name, int opt)
: ClapTrap(name)
{
	(void)opt;
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	std::cout << "[FragTrap]: Parameterized constructor called" << std::endl;
	return ;
}


FragTrap::FragTrap(const FragTrap& fragTrap)
: ClapTrap(fragTrap._name)
{
	this->_hitPoints = fragTrap._hitPoints;
	this->_energyPoints = fragTrap._energyPoints;
	this->_attackDamage = fragTrap._attackDamage;
	std::cout << "[FragTrap]: Copy constructor called" << std::endl;
	return ;
}

/* OCCF */
FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
	std::cout << "[FragTrap]: Assignment constructor called" << std::endl;

	if (this != &fragTrap)
		this->ClapTrap::operator=(fragTrap);
	return (*this);
}

/* Destructor */
FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap]: Destructor called" << std::endl;
	return ;
}

/* Methods*/
void FragTrap::highFivesGuys(void) const
{
	std::cout << "[FragTrap]: High five, guys! ✋" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (target.empty())
		std::cout << "FragTrap " << this->_name << " must select a target" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is already dead to attack" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is out of energy points" << std::endl;
	else
	{
		this->consumeEnergy();
		std::cout << "FragTrap " << this->_name
					<< " attacks " << target
					<< ", causing " << this->_attackDamage
					<< " points of damage!" << std::endl;
	}
}