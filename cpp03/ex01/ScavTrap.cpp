/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:12:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/06 20:01:01 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructors */
ScavTrap::ScavTrap(void)
: ClapTrap(), _inGuardGate(false)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "[ScavTrap]: Default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string name)
: ClapTrap(name), _inGuardGate(false)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "[ScavTrap]: Parameterized constructor called" << std::endl;
	 return ;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap(scavTrap)
{
	std::cout << "[ScavTrap]: Copy constructor called" << std::endl;
	this->_name = scavTrap._name;
	this->_hitPoints = scavTrap._hitPoints;
	this->_energyPoints = scavTrap._energyPoints;
	this->_attackDamage = scavTrap._attackDamage;
	this->_inGuardGate = scavTrap._inGuardGate;
	return ;
}

/* OCCF */
ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	std::cout << "[ScavTrap]: Assignment constructor called" << std::endl;
	if (this != &scavTrap)
	{
		this->_name = scavTrap._name;
		this->_hitPoints = scavTrap._hitPoints;
		this->_energyPoints = scavTrap._energyPoints;
		this->_attackDamage = scavTrap._attackDamage;
		this->_inGuardGate = scavTrap._inGuardGate;
	}
	return (*this);
}

/* Destructor */
ScavTrap::~ScavTrap(void)
{
	std::cout << "[ScavTrap]: Destructor called" << std::endl;
	return ;
}

/* Methods */
void ScavTrap::attack(const std::string& target)
{
	if (target.empty())
		std::cout << "ScavTrap " << this->_name << " must select a target" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is already dead to attack" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is out of energy points" << std::endl;
	else if (this->_inGuardGate)
		std::cout << "ScavTrap " << this->_name << " can't attack in Gate Kepper mode" << std::endl;
	else
	{
		this->consumeEnergy();
		std::cout << "ScavTrap " << this->_name
					<< " attacks " << target
					<< ", causing " << this->getAttackDamage()
					<< " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	if (this->_hitPoints <= 0)
		std::cout << "ScavTrap is already dead to Keeper mode" << std::endl;
	else if (!this->_inGuardGate)
		std::cout << "ScavTrap is now IN Gate keeper mode!" << std::endl;
	else
		std::cout << "ScavTrap is now OUT Gate keeper mode!" << std::endl;
	this->setGuardGate();
}

bool ScavTrap::getGuardGate(void) const { return (this->_inGuardGate); }
	
void ScavTrap::setGuardGate(void) { this->_inGuardGate ?  this->_inGuardGate = false :  this->_inGuardGate = true; }