/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 00:01:42 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/11 00:59:40 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include <cctype>

//OCCF
Intern::Intern(void)
{
	if (DEBUG_INTERN)
		std::cout << "[Intern]: Default constructor called" << std::endl;
	return ;
}

Intern::Intern(const Intern &i)
{
	(void)i;
	if (DEBUG_INTERN)
		std::cout << "[Intern]: Copy constructor called" << std::endl;
	return ;
}
Intern &Intern::operator=(const Intern &i)
{
	(void)i;
	if (DEBUG_INTERN)
		std::cout << "[Intern]: Assign constructor called" << std::endl;
	return (*this);
}

Intern::~Intern(void)
{
	if (DEBUG_INTERN)
		std::cout << "[Intern]: Default constructor called" << std::endl;
	return ;
}

//METHODS
AForm	*Intern::makeForm(const std::string &formName, const std::string &formTarget)
{
	std::string	formList[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm	*tmpForm;
	AForm *(Intern::*formFunction[3])(const std::string &) = 
	{
		&Intern::_createRobotomyForm,
		&Intern::_createPreisdentialForm,
		&Intern::_createShrubberyForm
	};
	for (int i = 0; i < 3; i++)
	{
		if (!formName.compare(formList[i]))
		{
			tmpForm = (this->*formFunction[i])(formTarget);
			std::cout << "Inter Creates " << tmpForm->getName() << std::endl;
			return (tmpForm);
		}
	}
	std::cout << "Provided form name does not exist" << std::endl;
	throw (InvalidFormCreation());
}

AForm *Intern::_createPreisdentialForm(const std::string &formTarget)
{
	return (new PresidentialPardonForm(formTarget));
}

AForm *Intern::_createRobotomyForm(const std::string &formTarget)
{

	return (new RobotomyRequestForm(formTarget));
}

AForm *Intern::_createShrubberyForm(const std::string &formTarget)
{
	return (new ShrubberyCreationForm(formTarget));
}

//EXCEPTIONS
const char *Intern::InvalidFormCreation::what() const throw()
{
	return ("Invalid form option");
}


