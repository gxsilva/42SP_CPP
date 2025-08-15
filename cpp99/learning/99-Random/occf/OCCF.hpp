/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OCCF.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:45:33 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/24 23:39:18 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
OCCF - Orthodox Canonical Class Form
Is a pattern that involves defining 5 special member functions for a class

- Default Constructor
- Default Copy Constructor
- Default Destructor
- Parameterized Construtor
- Assignment Operator
*/

#ifndef OCCF_H
#define OCCF_H

#include <iostream>

#include "Pet.hpp"

class Human
{
private:
	std::string		_name;
	int				_age;
	bool			_alive;
	Pet				_pet;

public:
	//Default Construtor
	Human(std::string& name, int age, bool alive,const Pet& pet); //Parameterzied Constructor
	Human(const Human &human); //Default copy constructor
	//Return a reference to *this(the current new(or not) object of the instance from Human)
	Human &operator=(const Human &other);
	~Human();
};

#endif // OCCF_H