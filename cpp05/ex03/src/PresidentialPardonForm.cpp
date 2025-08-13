/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:24:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 03:20:24 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

//------------------OCCF-----------------
PresidentialPardonForm::PresidentialPardonForm(void)
: AForm("PresidentialPardonForm", 25, 5, "default")
{
	if (DEBUG_PRESIDENTIAL_PARDON)
		std::cout << "[Shruberry]: Default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string targetPath)
: AForm("PresidentialPardonForm", 25, 5, targetPath)
{
	if (DEBUG_PRESIDENTIAL_PARDON)
		std::cout << "[Shruberry]: Parameterized constructor called" << std::endl;
	return ;
}

//PresidentialPardonForm -> AForm(const AForm &f)
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s)
: AForm(s)
{
	if (DEBUG_PRESIDENTIAL_PARDON)
		std::cout << "[Shruberry]: Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	if (DEBUG_PRESIDENTIAL_PARDON)
		std::cout << "[Shruberry]: Default destructor called" << std::endl;
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &s)
{
	if (this != &s)
		PresidentialPardonForm::AForm::operator=(s);
	return (*this);
}

//------------------METHODS-----------------
void PresidentialPardonForm::executeAction() const
{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}