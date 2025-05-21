/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:02:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/21 16:28:10 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
	#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie( void );
		~Zombie( void );
		void announce( void );
		void setName(std::string name);
	private:
		std::string	name;
};

Zombie* zombieHorde( int N, std::string name );


#endif