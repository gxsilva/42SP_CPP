/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:14:21 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/21 16:07:46 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
 # define ZOMBIE_HPP

class Zombie
{
	public:
		Zombie( std::string name );
		~Zombie( void );
		void announce( void );
	private:
		std::string	name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif