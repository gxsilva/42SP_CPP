/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:47:58 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/03 22:16:37 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"


/*-----------Constructors-------------*/

MateriaSource::MateriaSource (void)
{
	for (int i = 0; i < 4; i++)
		this->_storedMateria[i] = NULL;
	if (DEBUGGIN_ACTIVE)
		std::cout << "[MateriaSource]: Default constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._storedMateria[i] != NULL)
			this->_storedMateria[i] = other._storedMateria[i]->clone();
		else
			this->_storedMateria[i] = NULL;
	}
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
			if (other._storedMateria[i])
				this->_storedMateria[i] = other._storedMateria[i]->clone();
			else
			this->_storedMateria[i] = NULL;
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
	{
		if(this->_storedMateria[i] != NULL)
			delete (this->_storedMateria[i]);
	}
	if (DEBUGGIN_ACTIVE)
		std::cout << "[MateriaSource]: Destructor constructor called" << std::endl;
}

/*-----------Methods-------------*/
void MateriaSource::learnMateria(AMateria* materia)
{
	int i = -1;
	while (++i < 4)
	{
		if (this->_storedMateria[i] == NULL)
		{
			std::cout << "[MateriaSource]: Learn " << materia->getType() << std::endl;
			this->_storedMateria[i] = materia->clone(); //ownership
			break;
		}
	}
	if (i == 4)
		std::cout << "[MateriaSource]: Is already full of magic" << std::endl;
	if (materia != NULL)
		delete (materia);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_storedMateria[i] && this->_storedMateria[i]->getType() == type)
			return (this->_storedMateria[i]);
	}
	return (NULL);
}
