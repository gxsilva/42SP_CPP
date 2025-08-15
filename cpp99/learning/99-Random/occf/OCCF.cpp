/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OCCF.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:45:33 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/24 23:39:00 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "OCCF.hpp"

/*
Essa maneira funciona também porem é menos performática pois o objeto é criado
e depois atribuido, utilizando a lista de inicialização as duas operações ocorrem
ao mesmo tempo

Human::Human(std::string name, int age, bool alive, Pet pet)
: _pet(pet)
{
	this->_name = name;
	this->_age = age;
	this->_alive = alive;
}

https://chatgpt.com/share/683280c3-3680-8000-b9d1-81d6a7646a59 -> some questions to gpt
*/
Human::Human(std::string& name, int age, bool alive, const Pet& pet)
: _name(name), _age(age), _alive(alive), _pet(pet) { }
//_pet(pet) -> atutomatically call Pet copy constructor

Human::Human(const Human &human)
: _name(human._name), _age(human._age), _alive(human._alive), _pet(human._pet) {};

Human &Human::operator=(const Human &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_age = other._age;
		this->_alive = other._alive;
		this->_pet = other._pet;
	}
	return *this;
}

Human::~Human( void ) { return ; };
