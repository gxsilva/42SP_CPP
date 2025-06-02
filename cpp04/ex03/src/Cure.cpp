/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:56:09 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/02 00:46:06 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

Cure::Cure(void)
: AMateria("cure")
{ }

Cure::Cure(const Cure &other)
: AMateria(other.getType())
{ }

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

Cure::~Cure(void)
{ }

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'wounds *" << std::endl;
	return ;
}

AMateria* Cure::clone() const
{ return (new Cure(*this)); }
