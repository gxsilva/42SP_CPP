/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:38:14 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 15:22:06 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ===== Constructor(s) =====
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

// ===== Overloaded Operators =====

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

// ===== Destructor(s) =====
ClapTrap::~ClapTrap( void )
{
	std::cout << "[ClapTrap]: Destructor called" << std::endl;
	return;
}

// ===== Method(s) =====
void ClapTrap::consumeEnergy( void )
{
	this->setEnergyPoints(this->getEnergyPoints() - 1);
};

void ClapTrap::attack(const std::string& target)
{
	if(this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->getName() << " is already dead to attack" << std::endl;
	else if (target.empty())
		std::cout << "ClapTrap " << this->getName() << " must select a target" << std::endl;
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

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount < 0)
		std::cout << "ClapTrap " << this->getName() << " cannot negative repair XD" << std::endl;
	else if(this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->getName() << " is already dead to repaired" << std::endl;
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

const std::string& ClapTrap::getName (void) const { return (this->_name); }
int ClapTrap::getHitPoints (void) const { return (this->_hitPoints); }
int ClapTrap::getEnergyPoints (void) const { return (this->_energyPoints); }
int ClapTrap::getAttackDamage (void) const { return (this->_attackDamage); }

void ClapTrap::setEnergyPoints (const int newEnergyPoints) { this->_energyPoints = newEnergyPoints; }
void ClapTrap::setHitPoints (const int newHitPoints) { this->_hitPoints = newHitPoints; }