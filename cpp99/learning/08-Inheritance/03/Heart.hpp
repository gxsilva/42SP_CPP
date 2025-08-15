/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Heart.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:10:13 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 13:19:22 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEART_HPP
#define HEART_HPP

#include <iostream>

class Heart
{
	private:
		int		_heartHealth;
		bool 	_heartAlive;

	public:
		Heart( void ) : _heartHealth(50), _heartAlive(true) { return; };
		Heart(int heartHealth) : _heartHealth(heartHealth), _heartAlive(true) { return; };
		~Heart(void) { return; }

		Heart (const Heart& heart) : _heartHealth(heart.getHeartHealth()), _heartAlive(heart.getHeartAlive()) { return; };
		Heart& operator=(const Heart& heart)
		{
			if (this != &heart)
			{
				this->_heartHealth = heart.getHeartHealth();
				this->_heartAlive = heart.getHeartAlive();
			}
			return (*this);
		}
		const int getHeartHealth(void) const { return (this->_heartHealth); }
		const bool getHeartAlive(void) const { return (this->_heartAlive); }

		void pumpBlood (void) { std::cout << "Blood was pump" << std::endl; }
};

#endif