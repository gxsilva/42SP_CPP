/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 00:29:12 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/02 21:01:42 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

/*-----------Constructors-------------*/
Character::Character(void)
: _name("John Doe")
{
	for (int i = 0; i < 4; i++)
		this->materials[i] = NULL;
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Character]: Default constructor called" << std::endl;
	return ;
}

Character::Character(const std::string name)
: _name(name)
{
	for (int i = 0; i < 4; i++)
		this->materials[i] = NULL;
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Character]: Parameterized constructor called" << std::endl;
	return ;
}

/*-----------OCCF-------------*/
Character::Character(const Character &other)
: _name(other.getName())
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Character]: Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->materials[i] != NULL)
			this->materials[i] = other.materials[i]->clone();
		else
			this->materials[i] = NULL;
	}
	return ;
}

Character &Character::operator=(const Character &other)
{
	if (DEBUGGIN_ACTIVE)
		std::cout << "[Character]: Assignment constructor called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->materials[i] != NULL)
				this->materials[i] = other.materials[i]->clone();
			else
				this->materials[i] = NULL;
		}
		this->_name = other.getName();
	}
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
		if (getMaterial(i) != NULL)
		{
			this->materials[i] = m->clone();
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
	if (i == 4)
	{
		std::cout << "Character: " << this->getName()
		<< " equips " << m->getType() << std::endl;
	}
}

void Character::unequip(int idx)
{
	int		i = -1;

	if (idx > 4 || idx < 1)
		std::cout << "Invalid position to unequip a material" << std::endl;
	else if (this->getMaterial(idx) == NULL)
		std::cout << "This inventory position is already empty" << std::endl;
	else
	{
		//O(1) -> will be a rash map
		// while (Character::unequipMaterials[++i] != NULL)
		// {
		// 	if (Character::unequipMaterials[i] == this->getMaterial(idx))
		// 	{
		// 		if (DEBUGGIN_ACTIVE)
		// 			std::cout << "Material was ready add into list of unequiped" << std::endl;
		// 		break ; //this materia was already add into list
		// 	}
		// 	if (Character::unequipMaterials[i + 1] == NULL)
		// 		Character::unequipMaterials[i] = this->getMaterial(idx);
		// }
		this->setMaterial(NULL, i);
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 4 || idx < 0)
		std::cout << "Invalid position to use a material" << std::endl;
	else if (this->getMaterial(idx) == NULL)
		std::cout << "This inventory position is empty" << std::endl;
	else
		this->getMaterial(idx)->use(target);
	return ;
}