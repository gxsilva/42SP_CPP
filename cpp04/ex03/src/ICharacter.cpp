/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:36:02 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/01 23:36:07 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

const std::string& ICharacter::getName(void) const
{ return (this->_name); }

ICharacter::ICharacter(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ICharacter::ICharacter(const ICharacter &other)
{
	std::cout << "Copy constructor called" << std::endl;
	(void) other;
	return ;
}

ICharacter &ICharacter::operator=(const ICharacter &other)
{
	std::cout << "Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

ICharacter::~ICharacter(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

