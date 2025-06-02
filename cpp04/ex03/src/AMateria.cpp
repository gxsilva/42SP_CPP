/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:25:40 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/01 23:20:14 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
: _type("undefined")
{ std::cout << "[AMateria]: Default constructor called" << std::endl; }

AMateria::AMateria(std::string const &type)
: _type(type)
{ std::cout << "[AMateria]: Parameterized constructor called" << std::endl; }

AMateria::AMateria(const AMateria& amateria)
: _type(amateria.getType())
{ std::cout << "[ClapTrap]: Copy constructor called" << std::endl; }

AMateria& AMateria::operator=(const AMateria& amateria)
{
	if (this != &amateria)
		this->_type = amateria.getType();
	return (*this);
}

AMateria::~AMateria(void) { return; }

std::string const & AMateria::getType() const { return (this->_type); }