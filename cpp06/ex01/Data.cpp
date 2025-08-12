/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 02:16:37 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/12 02:54:33 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

//--------OCCF----------
Data::Data(const std::string name, int age)
: _name(name), _age(age)
{
	return ;
}

Data::Data(const Data &d)
: _name(d._name), _age(d._age)
{
	return ;
}

Data &Data::operator=(const Data &d)
{
	if (&d != this)
		_age = d._age;
	return (*this);
}

Data::~Data(void) { return ; }

//------------METHODS--------
const std::string &Data::getName(void) const { return (_name); }
int	Data::getAge(void) const { return (_age); }