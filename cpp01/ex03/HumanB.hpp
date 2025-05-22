/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:40:58 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/22 17:32:54 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"


class HumanB
{
	public:
		HumanB(std::string humanName);
		void attack( void ) const;
		void setWeapon(Weapon &newWeapon);

	private:
		std::string		_name;
		Weapon*			_weapon;
};

#endif