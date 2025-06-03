/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:47:58 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/02 20:52:48 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"


/*-----------Constructors-------------*/

MateriaSource::MateriaSource (void)
{
	for (int i = 0; i < 4; i++)
		this->_templates[i] = NULL;
	if (DEBUGGIN_ACTIVE)
		std::cout << "[MateriaSource]: Default constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
		this->_templates[i] = other._templates[i];
	if (DEBUGGIN_ACTIVE)
		std::cout << "[MateriaSource]: Copy constructor called" << std::endl;
}

/*-----------OCCF-------------*/
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete (this->_templates[i]);
			this->_templates[i] = NULL;
			if (other._templates[i])
				this->_templates[i] = other._templates[i]->clone();
		}
	}
	if (DEBUGGIN_ACTIVE)
		std::cout << "[MateriaSource]: Assignment operator called" << std::endl;
	return *this;
}

/*-----------Destructor-------------*/
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete (this->_templates[i]);
	if (DEBUGGIN_ACTIVE)
		std::cout << "[MateriaSource]: Destructor constructor called" << std::endl;
}

/*-----------Methods-------------*/
void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4;i++)
	{
		if (this->_templates[i] == NULL)
		{
			this->_templates[i] = materia->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_templates[i] && this->_templates[i]->getType() == type)
			return this->_templates[i]->clone();
	}
	return NULL;
}
