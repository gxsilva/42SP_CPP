/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:04:22 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/21 17:13:53 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
	public:
		typedef Weapon	w;
		const std::string&	getType( void ) const;
		void				setType (std::string newType);
		
	private:
		std::string	type;
};
