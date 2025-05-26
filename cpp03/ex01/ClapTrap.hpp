/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:37:59 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/26 17:21:06 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
private:
	std::string		_name;
	int				_hitPoints;
	int				_energyPoints;
	int				_attackDamage;

public:
	/* OCCF */
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& clapTrap);
	ClapTrap& operator=(const ClapTrap& clapTrap);
	~ClapTrap();

	/* Methods */
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void consumeEnergy (void);

	/* Getters */
	const std::string&	getName			(void) const { return (_name); }
	const int			getHitPoints	(void) const { return (_hitPoints); }
	const int			getEnergyPoints	(void) const { return (_energyPoints); }
	const int			getAttackDamage	(void) const { return (_attackDamage); }

	/* Setters */
	void				setEnergyPoints	(const int newEnergyPoints) { this->_energyPoints = newEnergyPoints; }
	void				setHitPoints	(const int newHitPoints) { this->_hitPoints = newHitPoints; }
};



#endif // ClapTrap_H