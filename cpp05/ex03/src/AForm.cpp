/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:25:28 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 03:19:16 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

//------------------OCCF-----------------
AForm::AForm(void)
: _name("default"),
_target("default"),
_signed(false),
_gradeRequiredToSign(150),
_gradeRequiredToExecute(150)
{
	if (DEBUG_AFORM)
		std::cout << "[Form]: Default constructor called" << std::endl;
}

AForm::AForm(const std::string &name,
		unsigned int gradeRequiredToSign,
		unsigned int gradeRequiredToExecute,
		const std::string &target)
: _name(name),
_target(target),
_signed(false),
_gradeRequiredToSign(gradeRequiredToSign),
_gradeRequiredToExecute(gradeRequiredToExecute)
{
	if (DEBUG_AFORM)
		std::cout << "[Form]: Parameterized constructor called" << std::endl;
	if (gradeRequiredToSign > Bureaucrat::grade_min || gradeRequiredToExecute > Bureaucrat::grade_min)
		throw (AForm::GradeTooLowException());
	if (gradeRequiredToSign < Bureaucrat::grade_max || gradeRequiredToExecute < Bureaucrat::grade_max)
		throw (AForm::GradeTooHighException());
}

AForm::AForm(const AForm &f)
: _name(f._name),
_target(f._target),
_signed(f._signed),
_gradeRequiredToSign(f._gradeRequiredToSign),
_gradeRequiredToExecute(f._gradeRequiredToExecute)
{
	if (DEBUG_AFORM)
		std::cout << "[Form]: Copy constructor called" << std::endl;
	return;
}

AForm &AForm::operator=(const AForm &f)
{
	if (DEBUG_AFORM)
		std::cout << "[Form]: Assign constructor called" << std::endl;
	if (this != &f)
		this->_signed = f._signed;
	return (*this);
}

AForm::~AForm(void)
{
	if (DEBUG_AFORM)
		std::cout << "[Form]: Default destructor called" << std::endl;
	return ;
}

//------------------GETTERS-----------------
const std::string	&AForm::getName(void) const { return (_name); }

const std::string	&AForm::getTarget(void) const { return (_target); }

bool AForm::getSigned(void) const { return (_signed); }

unsigned int AForm::getgradeRequiredToSign(void) const { return (_gradeRequiredToSign); }

unsigned int AForm::gradeRequiredToExecute(void) const { return (_gradeRequiredToExecute); }

//------------------OVERLOADING-----------------
std::ostream &operator<<(std::ostream &Os, const AForm &f)
{
	Os << "Form [Name]: " << f.getName() << "\n";
	Os << "Form [Target]: " << f.getTarget() << "\n";
	Os << "Form [Signed]: " << f.getSigned() << "\n";
	Os << "Form [Grade required to sign]: " << f.getgradeRequiredToSign() << "\n";
	Os << "Form [Grade required to execute]: " << f.gradeRequiredToExecute();
	return (Os);
}

std::ostream &operator<<(std::ostream &Os, const AForm *f)
{
	Os << "Form [Name]: " << f->getName() << "\n";
	Os << "Form [Target]: " << f->getTarget() << "\n";
	Os << "Form [Signed]: " << f->getSigned() << "\n";
	Os << "Form [Grade required to sign]: " << f->getgradeRequiredToSign() << "\n";
	Os << "Form [Grade required to execute]: " << f->gradeRequiredToExecute();
	return (Os);
}

//------------------EXCEPTIONS-----------------
const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too low");
}

const char *AForm::UnsignedForm::what() const throw()
{
	return ("Bureaucrat cannot execute the form because it is not signed");
}

//------------------METHODS-----------------
void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _gradeRequiredToSign)
		_signed = true;
	else
		throw (GradeTooLowException());
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!_signed)
		throw (UnsignedForm());
	else if (executor.getGrade() > _gradeRequiredToExecute)
		throw (GradeTooLowException());
	executeAction();
}