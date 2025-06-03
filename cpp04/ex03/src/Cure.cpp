/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:56:09 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/02 19:54:53 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

/*-----------Constructors-------------*/
Cure::Cure(void)
: AMateria("cure")
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[cure]: Default constructor called" << std::endl;
}

Cure::Cure(const Cure &other)
: AMateria(other.getType())
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[cure]: Copy constructor called" << std::endl;
}

/*-----------OCCF-------------*/
Cure &Cure::operator=(const Cure &other)
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[cure]: Assignment constructor called" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

/*-----------Destructor-------------*/
Cure::~Cure(void)
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[cure]: Destructor constructor called" << std::endl;
}

/*-----------Methods-------------*/
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'wounds *" << std::endl;
	return ;
}

AMateria* Cure::clone() const
{ return (new Cure(*this)); }
