/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:36:41 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 18:27:59 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Heart.hpp"
class Animal : virtual public Heart
{
	private:
		std::string		_animalSpecie;
		std::string		_animalFurColor;
		std::string		_animalTypeFood;
		
	public:
		Animal(void);
		Animal(std::string animalSpeci, std::string animalFurColor, std::string animalTypeFood );
		
		Animal(const Animal& other);

		Animal &operator=(const Animal &other);

		virtual void makeSound(void) const {std::cout << "Bark bark" << std::endl; }

		const std::string& getAnimalSpecie(void) const { return (this->_animalSpecie); }
		const std::string& getAnimalFurColor(void) const { return (this->_animalFurColor); }
		const std::string& getAnimalTypeFood(void) const { return (this->_animalTypeFood); }
		
		~Animal();
};

#endif

