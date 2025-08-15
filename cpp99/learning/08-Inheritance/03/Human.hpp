/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:36:41 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 15:56:12 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Heart.hpp"
#include "Animal.hpp"

class Human : virtual public Heart
{
	private:
		std::string		_humanName;
		int				_humanMoney;
		bool			_humanIsAlive;
		
	public:
		Human(void);
		Human(std::string humanName, int humanMoney, bool humanIsAlive);
		
		Human(const Human& other);
		Human &operator=(const Human &other);

		const std::string& getHumanName (void) const { return (this->_humanName); }
		const int getHumanMoney (void) const { return (this->_humanMoney); }
		const bool getHumanIsAlive (void) const {return (this->_humanIsAlive); }
		
		void talkRandomStuff(void) { std::cout << "random random random\n"; }

		~Human();
};

#endif

