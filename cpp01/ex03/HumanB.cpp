/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:08:36 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/22 17:34:46 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string humanName)
: _weapon(NULL)
{
	this->_name = humanName;
}

void HumanB::setWeapon (Weapon::w &newWeapon) { this->_weapon = &newWeapon; }

void HumanB::attack ( void ) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << "\n";
};
