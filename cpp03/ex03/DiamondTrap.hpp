/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:18:47 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/05 18:44:36 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

/*
. Virtual inheritance ensures that there is only one instance of the common base class, eliminating the ambiguity.
*/

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		_name;
	
public:
	DiamondTrap(void);
	DiamondTrap(std::string name) ;

	DiamondTrap(const DiamondTrap& diamondTrap);
	DiamondTrap& operator=(const DiamondTrap& diamondTrap);

	~DiamondTrap();

	const std::string& getName (void) const;

	void setName (const std::string newName);
	const std::string& tmp(void) const;
	void whoAmI() const;
};



#endif // DIAMONDTRAP_HPP
