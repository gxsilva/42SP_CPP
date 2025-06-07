/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:20:44 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/06 20:29:13 by lsilva-x         ###   ########.fr       */
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

	bool getGuardGate(void) const;
	
	void setGuardGate(void);
	
	void attack(const std::string& target);
	void guardGate(void);
};



#endif // SCAVTRAP_HPPs