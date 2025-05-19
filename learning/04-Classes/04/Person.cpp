/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:42:11 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/19 15:22:21 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"

Person::Person(std::string name, int age)
{
	this->ReSetName(name);
	this->ReSetAge(age);
	Person::addPerson();
}

int			Person::__people = 0;

Person::~Person(void) { return ; }

void		Person::ReSetName(const std::string &newName) { this->_name = newName; }
void		Person::ReSetAge(int newAge) { this->_age = newAge; }

const std::string&	Person::getName(void) const { return (this->_name); }
const int			Person::getAge(void) const { return (this->_age); }

void	Person::addPerson(void) { Person::__people += 1; }
int		Person::getPersonCnt(void) { return ( Person::__people ); }
