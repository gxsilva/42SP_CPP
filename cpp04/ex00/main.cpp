/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:17:45 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/30 00:56:22 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	{
	  std::cout << "\nSubjects tests:\n" << std::endl;
	  const Animal *meta = new Animal();
	  const Animal *j = new Dog();
	  const Animal *i = new Cat();
	  std::cout << j->getType() << " " << std::endl;
	  std::cout << i->getType() << " " << std::endl;
	  i->makeSound(); // will output the cat sound!
	  j->makeSound();
	  meta->makeSound();
	  delete meta;
	  delete j;
	  delete i;
	}
	{
	  std::cout << "\nMy tests:\n" << std::endl;
	  std::cout << "---------- Animal & Cat/Dog ----------" << std::endl;
	  const Animal *dog = new Dog();
	  const Animal *cat = new Cat();
	  const Animal *meta_animal = new Animal();
  
	  std::cout << dog->getType() << "-> ";
	  dog->makeSound();
  
	  std::cout << cat->getType() << "-> ";
	  cat->makeSound();
  
	  std::cout << std::endl;
  
	  meta_animal->makeSound();
  
	  std::cout << std::endl;
  
	  std::cout << "---------- WrongAnimal & WrongCat ----------" << std::endl;
  
	  const WrongAnimal *wrong_cat = new WrongCat();
	  const WrongAnimal *meta_wrong_animal = new WrongAnimal();
  
	  std::cout << std::endl;
  
	  std::cout << wrong_cat->getType() << "-> ";
	  wrong_cat->makeSound();
  
	  meta_wrong_animal->makeSound();
  
	  std::cout << std::endl;
  
	  delete dog;
	  delete cat;
	  delete meta_animal;
	  delete wrong_cat;
	  delete meta_wrong_animal;
	}
	return 0;
  }