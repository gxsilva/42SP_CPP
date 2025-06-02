/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 00:29:12 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/02 00:45:56 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

/*-----------Constructors-------------*/
Character::Character(void)
: _name("John Doe")
{}

Character::Character(const std::string name)
: _name(name)
{}

/*-----------OCCF-------------*/
Character::Character(const Character &other)
: _name(other.getName())
{}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
		this->_name = other.getName();
	return (*this);
}

/*-----------Destructor-------------*/
Character::~Character(void)
{}

/*-----------Methods-------------*/
const std::string& Character::getName(void) const
{ return (this->_name); }
