/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:08:20 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/21 17:17:16 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string humanName, Weapon::w* humanWeapon);
		void attack( void ) const;
		
	private:
		std::string		_name;
		Weapon*			_weapon;

};


HumanA::HumanA(std::string humanName, Weapon::w* humanWeapon)
{
	this->_name= humanName;
	this->_weapon = humanWeapon;
}

void attack( void ) const
{
	std::cout << };
