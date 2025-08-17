/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:20:47 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/16 21:42:49 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//------------------STATIC-----------------
unsigned int Bureaucrat::grade_max = 1;
unsigned int Bureaucrat::grade_min = 150;

//------------------OCCF-----------------
Bureaucrat::Bureaucrat(void)
: _name("default"), _grade(150)
{
	if (DEBUG_BUREAUCRAT)
		std::cout << "[Bureaucrat]: Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade)
: _name(name), _grade(grade)
{
	if (DEBUG_BUREAUCRAT)
		std::cout << "[Bureaucrat]: Parameterized constructor called" << std::endl;
	if (grade > Bureaucrat::grade_min)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < Bureaucrat::grade_max)
		throw (Bureaucrat::GradeTooHighException());
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
: _name(b._name), _grade(b._grade)
{
	if (DEBUG_BUREAUCRAT)
		std::cout << "[Bureaucrat]: Copy constructor called" << std::endl;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
	if (DEBUG_BUREAUCRAT)
		std::cout << "[Bureaucrat]: Assign constructor called" << std::endl;
	if (this != &b)
		this->_grade = b._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	if (DEBUG_BUREAUCRAT)
		std::cout << "[Bureaucrat]: Destructor constructor called" << std::endl;
	return ;
}

//------------------METHODS-----------------
void Bureaucrat::gradeIncrease(int x)
{
	if (DEBUG_BUREAUCRAT)
		std::cout << "[Bureaucrat]: gradeIncrease method called" << std::endl;
	if ((_grade - x) < Bureaucrat::grade_max)
		throw (GradeTooHighException());
	_grade -= x;
}

void Bureaucrat::gradeDecrease(int x)
{
	if (DEBUG_BUREAUCRAT)
		std::cout << "[Bureaucrat]: gradeDecrease method called" << std::endl;
	if ((_grade + x) > Bureaucrat::grade_min)
		throw (GradeTooLowException());
	_grade += x;
}

void Bureaucrat::signForm(Form &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << _name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

//------------------GETTERS-----------------
const std::string &Bureaucrat::getName(void) const { return (_name); }

unsigned int Bureaucrat::getGrade(void) const { return (_grade); }

//------------------EXCEPTIONS-----------------
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high: must be between 1 and 150");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low: must be between 1 and 150");
}

//------------------OVERLOADING-----------------
std::ostream &operator<<(std::ostream &Os, const Bureaucrat &b)
{
	Os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (Os);
}

std::ostream &operator<<(std::ostream &Os, const Bureaucrat *b)
{
	Os << b->getName() << ", bureaucrat grade " << b->getGrade();
	return (Os);
}