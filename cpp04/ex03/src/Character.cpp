/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 00:29:12 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/03 22:26:38 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

/*-----------Constructors-------------*/
Character::Character(void)
: _name("John Doe")
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Character]: Default constructor called" << std::endl;
	return ;
}

Character::Character(const std::string name)
: _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Character]: Parameterized constructor called" << std::endl;
	return ;
}

/*-----------OCCF-------------*/
Character::Character(const Character &other)
: _name(other.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (other._materias[i] != NULL)
			this->_materias[i] = other._materias[i];
		else
			this->_materias[i] = NULL;
	}
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Character]: Copy constructor called" << std::endl;
	return ;
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materias[i] != NULL)
			{
				this->_materias[i] = other._materias[i]->clone();
				delete (other._materias[i]);
			}
			else
				this->_materias[i] = NULL;
		}
		this->_name = other.getName();
	}
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Character]: Assignment constructor called" << std::endl;
	return (*this);
}

/*-----------Destructor-------------*/
Character::~Character(void)
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Character]: Copy constructor called" << std::endl;
	return ;
}

/*-----------Methods-------------*/
const std::string& Character::getName(void) const
{ return (this->_name); }


void Character::equip(AMateria* m)
{
	int i = -1;
	while (++i < 4)
	{
		if (this->_materias[i] == NULL)
		{
			std::cout << "[" << this->_name << "]: Equip " 
				<< m->getType() << " at position " << i << std::endl;
			this->_materias[i] = m;
			break ;
		}
	}
	if (DEBUGGIN_ACTIVE)
	{
		if(i == 4)
		std::cout << "Character: " << this->getName()
			<< " is out of spaces to equip " << m->getType() << std::endl;
		std::cout << "Character: " << this->getName()
			<< " equips " << m->getType()
			<< " at position: " << i << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		std::cout << "Invalid position to unequip a material" << std::endl;
	else if (this->_materias[idx] == NULL)
		std::cout << "This inventory position is already empty" << std::endl;
	else
	{
		std::cout << "[" << this->_name << "]: Unequip " 
		<< this->_materias[idx]->getType() << " from position " << idx << std::endl;
		this->_materias[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		std::cout << "Invalid position to use a material" << std::endl;
	else if (this->_materias[idx] == NULL)
		std::cout << "[" << this->_name << "] "<< "This inventory position is empty" << std::endl;
	else
		this->_materias[idx]->use(target);
	return ;
}