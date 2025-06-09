/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:19:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 16:40:47 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
: Animal()
{
	std::cout << "[Cat]: Default constructor called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(const Cat& other)
: Animal()
{
	std::cout << "[Cat]: Copy constructor called" << std::endl;
	this->type = other.type;
	return ;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "[Cat]: Assign constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat]: Destructor constructor called" << std::endl;
	return ;
}
void Cat::makeSound(void) const
{
	std::cout << "[Cat]: Meow! Meow!" << std::endl;
	return ;
}

