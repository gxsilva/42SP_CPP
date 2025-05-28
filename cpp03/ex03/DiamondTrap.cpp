/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:06:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/28 18:55:28 by lsilva-x         ###   ########.fr       */
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
	this->setHitPoints(this->FragTrap::getHitPoints());
	this->setEnergyPoints(this->ScavTrap::getEnergyPoints());
	this->setAttackDamage(this->FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name) 
: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "[DiamondTrap]: Parameterized constructor called" << std::endl;
	this->_name = name;
	this->setHitPoints(this->FragTrap::getHitPoints());
	this->setEnergyPoints(this->ScavTrap::getEnergyPoints());
	this->setAttackDamage(this->FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap)
: ClapTrap(diamondTrap.getName()), ScavTrap(diamondTrap.getName()), FragTrap(diamondTrap.getName())
{
	std::cout << "[DiamondTrap]: Copy constructor called" << std::endl;
	this->setName(diamondTrap.getName());
	this->setHitPoints(diamondTrap.getHitPoints());
	this->setEnergyPoints(diamondTrap.getEnergyPoints());
	this->setAttackDamage(diamondTrap.getAttackDamage());
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	std::cout << "[DiamondTrap]: Assignment constructor called" << std::endl;

	if (this != &diamondTrap)
	{
		this->setName(diamondTrap.getName());
		this->setHitPoints(diamondTrap.getHitPoints());
		this->setEnergyPoints(diamondTrap.getEnergyPoints());
		this->setAttackDamage(diamondTrap.getAttackDamage());
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
	std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << this->ClapTrap::getName() << std::endl;
}