/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:30:02 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/01 23:32:25 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers.hpp"

Ice::Ice (void)
: AMateria("ice")
{
	std::cout << "[ClapTrap]: Default constructor called" << std::endl;
	return ;
}

Ice::Ice (const Ice& ice)
: AMateria("ice")
{
	std::cout << "[ClapTrap]: Copy constructor called" << std::endl;
	return ;
}

Ice& Ice::operator=(const Ice& ice)
{
	if (this != &ice)
		AMateria::operator=(ice);
	std::cout << "[ClapTrap]: Assignment operator called" << std::endl;
	return *this;
}

Ice::~Ice (void)
{
	std::cout << "[ClapTrap]: Destructor called" << std::endl;
	return ;
}


AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

