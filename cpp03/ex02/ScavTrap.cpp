/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:12:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/05 18:39:52 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


/* Constructors */
ScavTrap::ScavTrap(void)
: ClapTrap(), _inGuardGate(false)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "[ScavTrap]: Default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string name)
: ClapTrap(name), _inGuardGate(false)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "[ScavTrap]: Parameterized constructor called" << std::endl;
	 return ;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap(scavTrap)
{
	std::cout << "[ScavTrap]: Copy constructor called" << std::endl;
	this->_inGuardGate = scavTrap.getGuardGate();
	return ;
}

/* OCCF */
ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	std::cout << "[ScavTrap]: Assignment constructor called" << std::endl;
	if (this != &scavTrap)
	{
		this->_inGuardGate = scavTrap.getGuardGate();
		this->ClapTrap::operator=(scavTrap);
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
		std::cout << "ScavTrap " << this->getName() << " must select a target" << std::endl;
	if (this->getHitPoints() <= 0)
		std::cout << "ScavTrap " << this->getName() << " is already dead" << std::endl;
	else if (this->getEnergyPoints() <= 0)
		std::cout << "ScavTrap " << this->getName() << " is out of energy points" << std::endl;
	else if (this->getGuardGate())
		std::cout << "ScavTrap " << this->getName() << " can't attack in Gate Kepper mode" << std::endl;
	else
	{
		this->consumeEnergy();
		std::cout << "ScavTrap " << this->getName()
					<< " attacks " << target
					<< ", causing " << this->getAttackDamage()
					<< " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	if (!this->getGuardGate())
		std::cout << "ScavTrap is now IN Gate keeper mode!" << std::endl;
	else
		std::cout << "ScavTrap is now OUT Gate keeper mode!" << std::endl;
	this->setGuardGate();
}

bool ScavTrap::getGuardGate(void) const { return (this->_inGuardGate); }

void ScavTrap::setGuardGate(void) { getGuardGate() ? _inGuardGate = false : _inGuardGate = true; }