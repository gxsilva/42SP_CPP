/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:56:09 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/01 23:32:55 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
: AMateria("cure")
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Cure::Cure(const Cure &other)
: AMateria(other.getType())
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
		
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}
