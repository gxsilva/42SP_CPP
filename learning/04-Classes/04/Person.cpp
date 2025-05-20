/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:42:11 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/19 16:10:06 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"

typedef std::vector<Person::p>::iterator itArr;

Person::Person(std::string name, int age)
{
	this->ReSetName(name);
	this->ReSetAge(age);
	Person::addPerson(this);
}

int			Person::__people = 0;
std::vector<Person::p> Person::__person_t;


Person::~Person(void) { return ; }

void		Person::ReSetName(const std::string &newName) { this->_name = newName; }
void		Person::ReSetAge(int newAge) { this->_age = newAge; }

const std::string&	Person::getName(void) const { return (this->_name); }
const int			Person::getAge(void) const { return (this->_age); }

void	Person::addPerson(Person::p *newPerson)
{
	Person::__people += 1;
	Person::__person_t.push_back(*newPerson);
}

int		Person::getPersonCnt(void) { return ( Person::__people ); }


void	Person::printPerson()
{
	std::cout << "--------debug--------" << "\n";
	for (itArr it = Person::__person_t.begin(); it != Person::__person_t.end(); it++)
	{
		std::cout << "Name: " << it->getName() << "\n";
		std::cout << "Age: " << it->getAge() << "\n";
	}
}

