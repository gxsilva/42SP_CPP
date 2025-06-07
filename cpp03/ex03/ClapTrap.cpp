/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:38:14 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/06 20:23:59 by lsilva-x         ###   ########.fr       */
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
	this->setEnergyPoints(this->_energyPoints - 1);
};

void ClapTrap::attack(const std::string& target)
{
	if (target.empty())
		std::cout << "ClapTrap " << this->_name << " must select a target" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead to attack" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy points" << std::endl;
	else
	{
		this->consumeEnergy();
		std::cout << "ClapTrap " << this->_name
					<< " attacks " << target
					<< ", causing " << this->_attackDamage
					<< " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < 0)
		std::cout << "ClapTrap " << this->_name << " cannot take negative damage XD" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead to take damage" << std::endl;
	else
	{
		this->setHitPoints(this->_hitPoints - amount);
		std::cout << "ClapTrap " << this->_name
				<< " takes " << amount
				<< " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount < 0)
		std::cout << "ClapTrap " << this->_name << " cannot negative repair XD" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead to be repaired" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy points" << std::endl;
	else
	{
		this->consumeEnergy();
		this->setHitPoints(this->_hitPoints + amount);
			std::cout << "ClapTrap " << this->_name
						<< " is repaired for " << amount
						<< " hit points!" << std::endl;
	}
}

const std::string& ClapTrap::getName (void) const { return (this->_name); }
int ClapTrap::getHitPoints (void) const { return (this->_hitPoints); }
int ClapTrap::getEnergyPoints (void) const { return (this->_energyPoints); }
int ClapTrap::getAttackDamage (void) const { return (this->_attackDamage); }

/* Setters */
void ClapTrap::setEnergyPoints (const int newEnergyPoints) { this->_energyPoints = newEnergyPoints; }
void ClapTrap::setHitPoints (const int newHitPoints) { this->_hitPoints = newHitPoints; }