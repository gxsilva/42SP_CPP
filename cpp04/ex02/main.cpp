/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:17:45 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/30 02:58:48 by lsilva-x         ###   ########.fr       */
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
    std::cout << "\nSubject test\n" << std::endl;

    const AAnimal *j = new Dog();
    const AAnimal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    delete j; // should not create a leak
    delete i;
  }
  std::cout << "\nMy tests\n" << std::endl;
  {
#define NBR_ANIMALS 4

    const AAnimal *i = new Dog();
    std::cout << std::endl;

    const AAnimal *j = new Cat();
    std::cout << std::endl;

    std::cout << "------------------- ZOO -------------------" << std::endl;
    const AAnimal *zoo[NBR_ANIMALS];

    std::cout << "------------------- DOGS -------------------" << std::endl;
    for (size_t i = 0; i < 2; i += 1) {
      zoo[i] = new Dog();
      std::cout << std::endl;
    }

    std::cout << "------------------- CATS -------------------" << std::endl;
    for (size_t i = 2; i < 4; i += 1) {
      zoo[i] = new Cat();
      std::cout << std::endl;
    }

    std::cout << "---------------- DELETE ZOO ---------------" << std::endl;
    for (size_t i = 0; i < NBR_ANIMALS; i += 1) {
      delete zoo[i];
    }
    std::cout << "--------------- ZOO DELETED ---------------" << std::endl;
    std::cout << std::endl;

    delete i;
    delete j;
  }
  return 0;
}