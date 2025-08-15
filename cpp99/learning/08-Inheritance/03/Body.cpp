/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Body.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:36:41 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 14:56:55 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Body.hpp"

//calling the standart Heart Constructor, Heart(void) -> _heartHealth(50), _heartAlive(true)
Body::Body(void)
: Heart(), _bodyAge(20), _bodyColor("Blue"), _bodyForce(50)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

//calling the parametrized Heart Constrcutor, Heart(int hearHealth) -> Heart(int heartHealth) : _heartHealth(heartHealth), _heartAlive(true) { return; };
Body::Body(int bodyAge, std::string bodyColor, int bodyForce)
: Heart(60), _bodyAge(bodyAge), _bodyColor(bodyColor), _bodyForce(bodyForce)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

// Since the Body class contains a Heart as a member,  we copy the Heart from the other object into this new Body instance
Body::Body(const Body &other)
: Heart(other), _bodyAge(other.getBodyAge()), _bodyColor(other.getBodyColor()), _bodyForce(other.getBodyForce())
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

//in this case the base class is automatically constructor and the base operator overloadin is called to copy the base values
Body &Body::operator=(const Body &other)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
	{
		Heart::operator=(other);
		this->_bodyAge = other.getBodyAge();
		this->_bodyColor = other.getBodyColor();
		this->_bodyForce = other.getBodyForce();
	}
	return (*this);
}

Body::~Body(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

