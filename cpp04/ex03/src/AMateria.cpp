/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:25:40 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/02 20:16:27 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

// AMateria::AMateria(void)
// : _type("undefined")
// {}

AMateria::AMateria(std::string const &type)
: _type(type)
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[AMateria]: Parameterized constructor called" << std::endl;
	return ;
}

AMateria::AMateria(const AMateria& amateria)
: _type(amateria.getType())
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[AMateria]: Copy constructor called" << std::endl;
	return ;
}

AMateria::~AMateria()
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[AMateria]: Destructor constructor called" << std::endl;
	return ;
}

AMateria& AMateria::operator=(const AMateria& amateria)
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[AMateria]: Assignment operator called (no-op, AMateria is immutable)" << std::endl;
	// Do not copy anything, as AMateria is immutable
	return (*this);
}

//clone function exist to be able assign a value to another instead of "casting" an exist type
std::string const & AMateria::getType() const { return (this->_type); }


void AMateria::use(ICharacter& target)
{
	(void) target;
	return ;
}
