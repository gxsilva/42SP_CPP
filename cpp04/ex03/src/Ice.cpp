/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:30:02 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/02 00:46:09 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

Ice::Ice (void)
: AMateria("ice")
{ }

Ice::Ice (const Ice& ice)
: AMateria("ice")
{ }

Ice& Ice::operator=(const Ice& ice)
{
	if (this != &ice)
		AMateria::operator=(ice);
	return (*this);
}

Ice::~Ice (void)
{	return ; }

AMateria* Ice::clone() const
{ return (new Ice(*this)); }


void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

