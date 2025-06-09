/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:49:10 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 16:45:27 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
: WrongAnimal()
{
	std::cout << "[WrongCat]: Default constructor called" << std::endl;
	this->setType("WrongCat");
	return ;
}

WrongCat::WrongCat(const WrongCat& other)
: WrongAnimal()
{
	std::cout << "[WrongCat]: Copy constructor called" << std::endl;
	this->setType(other.getType());
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "[WrongCat]: Assign constructor called" << std::endl;
	if (this != &other)
		this->setType(other.getType());
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat]: Destructor constructor called" << std::endl;
	return ;
}
void WrongCat::makeSound(void) const
{
	std::cout << "[WrongCat]: Woof! miar..? Woof!" << std::endl;
	return ;
}

