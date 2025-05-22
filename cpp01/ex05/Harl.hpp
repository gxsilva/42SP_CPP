/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:15:08 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/22 20:24:17 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	public:
		Harl (void);
		~Harl (void);
		void complain( std::string level );
		
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};




#endif