/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:04:22 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/22 17:23:22 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
	public:
		typedef Weapon	w;

		Weapon(std::string weaponName);
		
		const std::string&	getType( void ) const;
		void				setType (std::string newType);
		
	private:
		std::string	type;
};

#endif