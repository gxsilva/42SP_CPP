/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:49:21 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/15 17:11:42 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

// Never put a "using namespace" statement in a header

class Person
{
	//better approach than set it directly (name = name
	Person(std::string name, int age, bool alive)
	{
		this->_name = name;
		this->_age = age;
		this->_alive = alive;
	}
	public:			//getter + setter -> Encapsulation
	//Setter Declaration(s)
		void			setName(std::string newName);
	//Getter Declaration(s)
		std::string		getName(void);
	private:
	std::string		_name;
	int				_age;
	bool			_alive;
};

//Setters definition
void Person::setName(std::string newName)
{
	this->_name = newName;
}

//Getter definition
std::string Person::getName(void)
{
	return (this->_name);
}

/*
	The constructor also can be define outside the Class

	Person::Person(std::string name, int age, bool alive)
	{
		this->_name = name;
		this->_age = age;
		this->_alive = alive;
	}
*/
#endif