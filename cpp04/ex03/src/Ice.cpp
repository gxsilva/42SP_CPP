/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:30:02 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/03 20:20:52 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

/*-----------Constructors-------------*/
Ice::Ice (void)
: AMateria("ice")
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Ice]: Default constructor called" << std::endl;
	return ;
}

Ice::Ice (const std::string _ignore)
: AMateria("ice")
{
	(void)_ignore;
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Ice]: Parametrized constructor called" << std::endl;
	return ;
}

Ice::Ice (const Ice& ice)
: AMateria(ice.getType())
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Ice]: Copy constructor called" << std::endl;
	return ;
}

/*-----------OCCF-------------*/
Ice& Ice::operator=(const Ice& ice)
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Ice]: Assignment constructor called" << std::endl;
	if (this != &ice)
		AMateria::operator=(ice); //stil dont doing anything
	return (*this);
}

/*-----------Destructor-------------*/
Ice::~Ice (void)
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Ice]: Destructor constructor called" << std::endl;
	return ;
}

/*-----------Methods-------------*/
AMateria* Ice::clone() const
{ return (new Ice(*this)); }

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


