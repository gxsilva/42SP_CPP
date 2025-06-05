/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:20:44 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/05 18:46:14 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap
{
private:
	bool	_inGuardGate;

public:
	ScavTrap(void);
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap& scavTrap);
	
	ScavTrap& operator=(const ScavTrap& scavTrap);

	~ScavTrap();

	bool getGuardGate(void) const { return (this->_inGuardGate); }
	
	void setGuardGate(void) { getGuardGate() ? _inGuardGate = false : _inGuardGate = true; }
	
	void attack(const std::string& target);
	void guardGate(void);
};

#endif // SCAVTRAP_HPPs