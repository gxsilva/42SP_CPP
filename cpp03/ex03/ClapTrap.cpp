/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:38:14 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/01 23:25:02 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
: _name("unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ClapTrap]: Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ClapTrap]: Parameterized constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
: _name(clapTrap._name),
  _hitPoints(clapTrap._hitPoints),
  _energyPoints(clapTrap._energyPoints),
  _attackDamage(clapTrap._attackDamage)
{
	std::cout << "[ClapTrap]: Copy constructor called" << std::endl;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	std::cout << "[ClapTrap]: Assignment constructor called" << std::endl;
	if (&clapTrap != this)
	{
		this->_name = clapTrap._name;
		this->_hitPoints = clapTrap._hitPoints;
		this->_energyPoints = clapTrap._energyPoints;
		this->_attackDamage = clapTrap._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "[ClapTrap]: Destructor called" << std::endl;
	return;
}

void ClapTrap::consumeEnergy( void )
{
	this->setEnergyPoints(this->getEnergyPoints() - 1);
};

void ClapTrap::attack(const std::string& target)
{
	if (target.empty())
		std::cout << "ClapTrap " << this->getName() << " must select a target" << std::endl;
	else if (this->getHitPoints() <= 0)
		std::cout << "ClapTrap " << this->getName() << " is already dead" << std::endl;
	else if (this->getEnergyPoints() <= 0)
		std::cout << "ClapTrap " << this->getName() << " is out of energy points" << std::endl;
	else
	{
		this->consumeEnergy();
		std::cout << "ClapTrap " << this->getName()
					<< " attacks " << target
					<< ", causing " << this->getAttackDamage()
					<< " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(int amount)
{
	if (amount < 0)
		std::cout << "ClapTrap " << this->getName() << " cannot take negative damage XD" << std::endl;
	else if (this->getHitPoints() <= 0)
		std::cout << "ClapTrap " << this->getName() << " is already dead" << std::endl;
	else
	{
		this->setHitPoints(this->getHitPoints() - amount);
		std::cout << "ClapTrap " << this->getName()
				<< " takes " << amount
				<< " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(int amount)
{
	if (amount < 0)
		std::cout << "ClapTrap " << this->getName() << " cannot negative repair XD" << std::endl;
	else if (this->getHitPoints() <= 0)
		std::cout << "ClapTrap " << this->getName() << " is already dead" << std::endl;
	else if (this->getEnergyPoints() <= 0)
		std::cout << "ClapTrap " << this->getName() << " is out of energy points" << std::endl;
	else
	{
		this->consumeEnergy();
		this->setHitPoints(this->getHitPoints() + amount);
			std::cout << "ClapTrap " << this->getName()
						<< " is repaired for " << amount
						<< " hit points!" << std::endl;
	}
}