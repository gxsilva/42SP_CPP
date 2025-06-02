/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:25:40 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/02 00:46:01 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

AMateria::AMateria(void)
: _type("undefined")
{}

AMateria::AMateria(std::string const &type)
: _type(type)
{}

AMateria::AMateria(const AMateria& amateria)
: _type(amateria.getType())
{}

AMateria& AMateria::operator=(const AMateria& amateria)
{
	if (this != &amateria)
		this->_type = amateria.getType();
	return (*this);
}

AMateria::~AMateria(void) { return; }

std::string const & AMateria::getType() const { return (this->_type); }