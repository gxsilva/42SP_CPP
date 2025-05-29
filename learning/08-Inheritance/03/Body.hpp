/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Body.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:36:41 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 15:44:26 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BODY_HPP
# define BODY_HPP

#include <iostream>
#include "Heart.hpp"

class Body : public Heart
{
	private:
		int			_bodyAge;
		std::string	_bodyColor;
		int			_bodyForce;
		
	public:
		Body(void);
		Body(int bodyAge, std::string bodyColor, int bodyForce);

		Body(const Body& other);

		Body &operator=(const Body &other);
		~Body();

		void	talkRandomStuff(void) const { std::cout << "btw i use arch!" << std::endl; }

		const int getBodyAge (void) const { return (this->_bodyAge); }
		const std::string& getBodyColor(void) const { return (this->_bodyColor); }
		const int getBodyForce (void) const { return (this->_bodyForce); }
};

#endif

