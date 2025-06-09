/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:26:35 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 18:27:31 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "[Brain]: Default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &other)
{
	std::cout << "[Brain]: Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return ;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "[Brain]: Assignment operator called" << std::endl;
	
	if(this != &other)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "[Brain]: Destructor called" << std::endl;
	return ;
}

const std::string&	Brain::getIdeas(int pst) const { return (this->ideas[pst]); }

