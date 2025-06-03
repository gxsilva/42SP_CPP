/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:17:01 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/02 20:50:59 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/headers.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob; // Character
	delete me; // Character
	delete src; // MateriaSource
	return 0;
}


// std::cout << "[ClapTrap]: Default constructor called" << std::endl;
// std::cout << "[ClapTrap]: Parameterized constructor called" << std::endl;
// std::cout << "[ClapTrap]: Copy constructor called" << std::endl;
// std::cout << "[ClapTrap]: Assignment constructor called" << std::endl;
// std::cout << "[ClapTrap]: Destructor called" << std::endl;