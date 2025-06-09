/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:25:40 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 18:52:36 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

AMateria::AMateria(std::string const &type)
: _type(type)
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[AMateria]: Parameterized constructor called" << std::endl;
	return ;
}

AMateria::AMateria(const AMateria& amateria)  // Ice* new_ice = Ice(old_ice) 
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

AMateria& AMateria::operator=(const AMateria& amateria) //no-op
{
	(void)amateria;
	if (DEBUGGIN_ACTIVE)
		std::cout << "[AMateria]: Assignment operator called (no-op, AMateria is immutable)" << std::endl;
	return (*this);
}

std::string const & AMateria::getType() const { return (this->_type); }

void AMateria::use(ICharacter& target)
{
	(void) target;
	return ;
}
