/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:20:47 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/10 16:15:45 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


//------------------STATIC-----------------
unsigned int Bureaucrat::grade_max = 1;
unsigned int Bureaucrat::grade_min = 150;

//------------------OCCF-----------------
Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade)
: _name(name), _grade(grade)
{
	if (DEBUG)
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
	if (DEBUG)
		std::cout << "[Bureaucrat]: Copy constructor called" << std::endl;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
	if (DEBUG)
		std::cout << "[Bureaucrat]: Assign constructor called" << std::endl;
	if (this != &b)
	{
		// this->_name = b._name; -> _name is const
		this->_grade = b._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	if (DEBUG)
		std::cout << "[Bureaucrat]: Destructor constructor called" << std::endl;
	return ;
}

//------------------METHODS-----------------
void Bureaucrat::gradeIncrease(int x)
{
	if (DEBUG)
		std::cout << "[Bureaucrat]: gradeIncrease method called" << std::endl;
	if ((_grade - x) < Bureaucrat::grade_max)
		throw (GradeTooHighException());
	_grade -= x;
}

void Bureaucrat::gradeDecrease(int x)
{
	if (DEBUG)
		std::cout << "[Bureaucrat]: gradeDecrease method called" << std::endl;
	if ((_grade + x) > Bureaucrat::grade_min)
		throw (GradeTooLowException());
	_grade += x;
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