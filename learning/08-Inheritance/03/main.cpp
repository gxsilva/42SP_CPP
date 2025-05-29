/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:37:47 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 16:03:16 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Heart.hpp"
#include "Human.hpp"
#include "Animal.hpp"
#include "Minotaur.hpp"

int main(int argc, char const *argv[])
{
	Heart	objHeart01;
	Heart	objHeart02(200);

	std::cout << "Heart 01 | Health: \t " << objHeart01.getHeartHealth() << std::endl;
	std::cout << "Heart 01 | Alive: \t " << objHeart01.getHeartAlive() << std::endl;
 	objHeart01.pumpBlood();
	
	std::cout << "----------------------------------" << std::endl;
	

	std::cout << "Heart 02 | Health: \t " << objHeart02.getHeartHealth() << std::endl;
	std::cout << "Heart 02 | Alive: \t " << objHeart02.getHeartAlive() << std::endl;
 	objHeart02.pumpBlood();
	
	std::cout << "==================================" << std::endl;

	Human objBody01;
	Human objBody02("Marcolino", 455, 1);

	std::cout << "Human 01 | Name: \t " << objBody01.getHumanName() << std::endl;
	std::cout << "Human 01 | Money: \t " << objBody01.getHumanMoney() << std::endl;
	std::cout << "Human 01 | IsAlive: \t " << objBody01.getHumanIsAlive() << std::endl;
	std::cout << "Human Heart 01 | Health: \t " << objBody01.getHeartHealth() << std::endl;
	std::cout << "Human Heart 01 | Alive: \t " << objBody01.getHeartAlive() << std::endl;
	objBody01.pumpBlood();
	objBody01.talkRandomStuff();

	std::cout << "----------------------------------" << std::endl;

	std::cout << "Human 02 | Name: \t " << objBody02.getHumanName() << std::endl;
	std::cout << "Human 02 | Money: \t " << objBody02.getHumanMoney() << std::endl;
	std::cout << "Human 02 | IsAlive: \t " << objBody02.getHumanIsAlive() << std::endl;
	std::cout << "Human Heart 02 | Health: \t " << objBody02.getHeartHealth() << std::endl;
	std::cout << "Human Heart 02 | Alive: \t " << objBody02.getHeartAlive() << std::endl;
	objBody02.pumpBlood();
	objBody02.talkRandomStuff();

	std::cout << "==================================" << std::endl;

	Animal objAnimal01;
	Animal objAnimal02("Cat", "Yellow", "Meat");

	std::cout << "Animal 01 | Specie: \t " << objAnimal01.getAnimalSpecie() << std::endl;
	std::cout << "Animal 01 | Fur color: \t " << objAnimal01.getAnimalFurColor() << std::endl;
	std::cout << "Animal 01 | Type of food: \t " << objAnimal01.getAnimalTypeFood() << std::endl;
	std::cout << "Animal Heart 01 | Health: \t " << objAnimal01.getHeartHealth() << std::endl;
	std::cout << "Animal Heart 01 | Alive: \t " << objAnimal01.getHeartAlive() << std::endl;
	objBody02.pumpBlood();
	objAnimal01.makeSound();

	std::cout << "----------------------------------" << std::endl;

	std::cout << "Animal 02 | Specie: \t " << objAnimal02.getAnimalSpecie() << std::endl;
	std::cout << "Animal 02 | Fur color: \t " << objAnimal02.getAnimalFurColor() << std::endl;
	std::cout << "Animal 02 | Type of food: \t " << objAnimal02.getAnimalTypeFood() << std::endl;
	std::cout << "Animal Heart 02 | Health: \t " << objAnimal02.getHeartHealth() << std::endl;
	std::cout << "Animal Heart 02 | Alive: \t " << objAnimal02.getHeartAlive() << std::endl;

	std::cout << "==================================" << std::endl;

	Minotaur objMinotaur01;
	Minotaur objMinotaur02("King Minotaur", "Axe", "King");

	std::cout << "Minotaur 01 | Name: \t " << objMinotaur01.getMinotaurName() << std::endl;
	std::cout << "Minotaur 01 | Weapon: \t " << objMinotaur01.getMinotaurWeapon() << std::endl;
	std::cout << "Minotaur 01 | Position: \t " << objMinotaur01.getMinotaurPosition() << std::endl;
	std::cout << "Minotaur 01 | Specie: \t " << objMinotaur01.getAnimalSpecie() << std::endl;
	std::cout << "Minotaur 01 | Fur color: \t " << objMinotaur01.getAnimalFurColor() << std::endl;
	std::cout << "Minotaur 01 | Type of food: \t " << objMinotaur01.getAnimalTypeFood() << std::endl;
	std::cout << "Minotaur 01 | Health: \t " << objMinotaur01.getHeartHealth() << std::endl;
	std::cout << "Minotaur 01 | Alive: \t " << objMinotaur01.getHeartAlive() << std::endl;

	objMinotaur01.pumpBlood();
	objMinotaur01.makeSound();
	objMinotaur01.brandish();

	std::cout << "----------------------------------" << std::endl;

	std::cout << "Minotaur 02 | Name: \t " << objMinotaur02.getMinotaurName() << std::endl;
	std::cout << "Minotaur 02 | Weapon: \t " << objMinotaur02.getMinotaurWeapon() << std::endl;
	std::cout << "Minotaur 02 | Position: \t " << objMinotaur02.getMinotaurPosition() << std::endl;
	std::cout << "Minotaur 02 | Specie: \t " << objMinotaur02.getAnimalSpecie() << std::endl;
	std::cout << "Minotaur 02 | Fur color: \t " << objMinotaur02.getAnimalFurColor() << std::endl;
	std::cout << "Minotaur 02 | Type of food: \t " << objMinotaur02.getAnimalTypeFood() << std::endl;
	std::cout << "Minotaur 02 | Health: \t " << objMinotaur02.getHeartHealth() << std::endl;
	std::cout << "Minotaur 02 | Alive: \t " << objMinotaur02.getHeartAlive() << std::endl;

	objMinotaur02.pumpBlood();
	objMinotaur02.makeSound();
	objMinotaur02.brandish();

	return 0;
}
