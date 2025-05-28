/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:37:59 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/28 18:08:23 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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
	virtual ~ClapTrap();

	/* Methods */
	virtual void attack(const std::string& target);
	void takeDamage(int amount);
	void beRepaired(int amount);
	void consumeEnergy (void);

	/* Getters */
	const std::string&	getName			(void) const { return (_name); }
	const int			getHitPoints	(void) const { return (_hitPoints); }
	const int			getEnergyPoints	(void) const { return (_energyPoints); }
	const int			getAttackDamage	(void) const { return (_attackDamage); }

	/* Re-Setters */
	void				reSetName(const std::string newName) { this->_name = newName; }
	
	/* Setters */
	void				setEnergyPoints	(const int newEnergyPoints) { this->_energyPoints = newEnergyPoints; }
	void				setAttackDamage	(const int newAttackDamge) { this->_attackDamage = newAttackDamge; }
	void				setHitPoints	(const int newHitPoints) { this->_hitPoints = newHitPoints; }
};



#endif // ClapTrap_H