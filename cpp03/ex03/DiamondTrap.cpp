/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:06:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/06 20:47:59 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
• Name, which is passed as a parameter to a constructor
• ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
• Hit points (FragTrap)
• Energy points (ScavTrap)
• Attack damage (FragTrap)
• attack() (ScavTrap)
*/

DiamondTrap::DiamondTrap(void)
: ClapTrap("unnamed_clap_name"), ScavTrap("unnamed"), FragTrap("unnamed")
{
	std::cout << "[DiamondTrap]: Default constructor called" << std::endl;
	this->_name = "unnamed";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) 
: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "[DiamondTrap]: Parameterized constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap)
: ClapTrap(diamondTrap._name), ScavTrap(diamondTrap._name), FragTrap(diamondTrap._name)
{
	std::cout << "[DiamondTrap]: Copy constructor called" << std::endl;
	this->_name = diamondTrap._name;
	this->_hitPoints = diamondTrap._hitPoints;
	this->_energyPoints =diamondTrap._energyPoints;
	this->_attackDamage = diamondTrap._attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	std::cout << "[DiamondTrap]: Assignment constructor called" << std::endl;

	if (this != &diamondTrap)
	{
		this->_name = diamondTrap._name;
		this->_hitPoints = diamondTrap._hitPoints;
		this->_energyPoints =diamondTrap._energyPoints;
		this->_attackDamage = diamondTrap._attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[DiamondTrap]: Destructor called" << std::endl;
	return ;
}

void DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << this->ClapTrap::_name << std::endl;
}

const std::string& DiamondTrap::getName (void) const { return _name; }

void DiamondTrap::setName (const std::string newName) { _name = newName; }


void DiamondTrap::attack(const std::string& target)
{
	if (target.empty())
		std::cout << "DiamondTrap " << this->_name << " must select a target" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "DiamondTrap " << this->_name << " is already dead to attack" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "DiamondTrap " << this->_name << " is out of energy points" << std::endl;
	else
	{
		this->consumeEnergy();
		std::cout << "DiamondTrap " << this->_name
					<< " attacks " << target
					<< ", causing " << this->_attackDamage
					<< " points of damage!" << std::endl;
	}
}