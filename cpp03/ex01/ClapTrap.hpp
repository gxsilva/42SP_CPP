/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:37:59 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/05 19:07:01 by lsilva-x         ###   ########.fr       */
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
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void consumeEnergy (void);

	/* Getters */
	const std::string&	getName	(void) const;
	int			getHitPoints	(void) const;
	int			getEnergyPoints	(void) const;
	int			getAttackDamage	(void) const;

	/* Re-Setters */
	void				reSetName(const std::string newName);
	
	/* Setters */
	void				setEnergyPoints	(const int newEnergyPoints);
	void				setAttackDamage	(const int newAttackDamge);
	void				setHitPoints	(const int newHitPoints);
};

#endif // ClapTrap_H