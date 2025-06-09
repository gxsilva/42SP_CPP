/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:37:59 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 13:28:09 by lsilva-x         ###   ########.fr       */
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
	ClapTrap(void);
	ClapTrap(std::string name);

	/* OCCF */
	ClapTrap(const ClapTrap& clapTrap);
	ClapTrap& operator=(const ClapTrap& clapTrap);
	~ClapTrap();

	/* Methods */
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	void consumeEnergy (void);

	/* Getters */
	const std::string&	getName (void) const;
	int					getHitPoints (void) const;
	int					getEnergyPoints (void) const;
	int					getAttackDamage (void) const;

	/* Setters */
	void	setEnergyPoints	(const int newEnergyPoints);
	void	setHitPoints	(const int newHitPoints);
};

#endif // ClapTrap_H