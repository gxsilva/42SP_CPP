/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Frag.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:38:03 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/28 18:58:28 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructors */
FragTrap::FragTrap(void)
: ClapTrap()
{
	setHitPoints(100);
	setAttackDamage(30);
	std::cout << "[FragTrap]: Default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
: ClapTrap(name)
{
	setHitPoints(100);
	setAttackDamage(30);
	std::cout << "[FragTrap]: Parameterized constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& fragTrap)
: ClapTrap(fragTrap)
{
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