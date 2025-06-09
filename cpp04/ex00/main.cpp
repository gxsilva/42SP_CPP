/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:17:45 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 18:05:26 by lsilva-x         ###   ########.fr       */
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
	  std::cout << std::endl;
	  std::cout << j->getType() << std::endl;
	  std::cout << i->getType() << std::endl;
	  std::cout << std::endl;
	  j->makeSound();
	  i->makeSound(); // will output the cat sound!
	  meta->makeSound();
	  std::cout << std::endl;
	  delete meta;
	  delete j;
	  delete i;
	}
	{
	  std::cout << "---------- Animal & Cat/Dog ----------" << std::endl;
	  const Animal *dog = new Dog();
	  const Animal *cat = new Cat();
	  const Animal *meta_animal = new Animal();
	  std::cout << std::endl;
	  
	  std::cout << dog->getType() << "-> ";
	  dog->makeSound();
  
	  std::cout << cat->getType() << "-> ";
	  cat->makeSound();
	  meta_animal->makeSound();
  
	  std::cout << std::endl;
	  delete dog;
	  delete cat;
	  delete meta_animal;
	  std::cout << std::endl;
  
	  std::cout << "---------- WrongAnimal & WrongCat ----------" << std::endl;
  
	  const WrongAnimal *wrong_cat = new WrongCat();
	  const WrongCat *wrong_cat_cast = new WrongCat();
  
	  std::cout << std::endl;
  
	  std::cout << wrong_cat->getType() << "-> ";
	  wrong_cat->makeSound();
  
	  std::cout << wrong_cat_cast->getType() << "-> ";
	  wrong_cat_cast->makeSound();
  
	  std::cout << std::endl;
  
	
	  delete wrong_cat;
	  delete wrong_cat_cast;
	}
	return 0;
  }