/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:25:28 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/10 19:03:02 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//------------------OCCF-----------------
Form::Form(const std::string name, unsigned int gradeRequiredToSign, unsigned int gradeRequiredToExecute)
: _name(name),
_signed(false),
_gradeRequiredToSign(gradeRequiredToSign),
_gradeRequiredToExecute(gradeRequiredToExecute)
{
	if (DEBUG_FORM)
		std::cout << "[Form]: Parameterized constructor called" << std::endl;
	if (gradeRequiredToSign > Bureaucrat::grade_min && gradeRequiredToSign > Bureaucrat::grade_min)
		throw (Form::GradeTooLowException());
	if (gradeRequiredToExecute < Bureaucrat::grade_max && gradeRequiredToExecute < Bureaucrat::grade_max)
		throw (Form::GradeTooHighException());
	return ;
}

Form::Form(const Form &f)
: _name(f._name),
_signed(f._signed),
_gradeRequiredToSign(f._gradeRequiredToSign),
_gradeRequiredToExecute(f._gradeRequiredToExecute)
{
	if (DEBUG_FORM)
		std::cout << "[Form]: Copy constructor called" << std::endl;
	return;
}

Form &Form::operator=(const Form &f)
{
	if (DEBUG_FORM)
		std::cout << "[Form]: Assign constructor called" << std::endl;
	if (this != &f)
	{
		// this->_name = f._name; -> const value
		this->_signed = f._signed;
		// this->_gradeRequiredToSign = f._gradeRequiredToSign; -> const value
		// this->gradeRequiredToExecute = f.gradeRequiredToExecute; -> const value
	}
	return (*this);
}

Form::~Form(void)
{
	if (DEBUG_FORM)
		std::cout << "[Form]: Default destructor called" << std::endl;
	return ;
}

//------------------GETTERS-----------------
const std::string	&Form::getName(void) const { return (_name); }

bool Form::getSigned(void) const { return (_signed); }

unsigned int Form::getgradeRequiredToSign(void) const { return (_gradeRequiredToSign); }

unsigned int Form::gradeRequiredToExecute(void) const { return (_gradeRequiredToExecute); }


//------------------OVERLOADING-----------------
std::ostream &operator<<(std::ostream &Os, const Form &f)
{
	Os << "Form [Name]: " << f.getName() << "\n";
	Os << "Form [Signed]: " << f.getSigned() << "\n";
	Os << "Form [Grade required to sign]: " << f.getgradeRequiredToSign() << "\n";
	Os << "Form [Grade required to execute]: " << f.gradeRequiredToExecute();
	return (Os);
}

std::ostream &operator<<(std::ostream &Os, const Form *f)
{
	Os << "Form [Name]: " << f->getName() << "\n";
	Os << "Form [Signed]: " << f->getSigned() << "\n";
	Os << "Form [Grade required to sign]: " << f->getgradeRequiredToSign() << "\n";
	Os << "Form [Grade required to execute]: " << f->gradeRequiredToExecute();
	return (Os);
}

//------------------EXCEPTIONS-----------------

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too low");
}

//------------------METHODS-----------------
void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _gradeRequiredToSign)
		_signed = true;
	else
		throw (GradeTooLowException());
}
