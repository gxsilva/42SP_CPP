/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:24:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/16 21:44:08 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>

#include "../includes/RobotomyRequestForm.hpp"

//------------------OCCF-----------------
RobotomyRequestForm::RobotomyRequestForm(void)
: AForm("RobotomyRequestForm", 72, 45, "default")
{
	if (DEBUG_ROBOTOMY_REQUEST)
		std::cout << "[Robotomy]: Default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string targetPath)
: AForm("RobotomyRequestForm", 72, 45, targetPath)
{
	if (DEBUG_ROBOTOMY_REQUEST)
		std::cout << "[Robotomy]: Parameterized constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s)
: AForm(s)
{
	if (DEBUG_ROBOTOMY_REQUEST)
		std::cout << "[Robotomy]: Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	if (DEBUG_ROBOTOMY_REQUEST)
		std::cout << "[Robotomy]: Default destructor called" << std::endl;
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &s)
{
	if (this != &s)
		RobotomyRequestForm::AForm::operator=(s);
	return (*this);
}

//------------------METHODS-----------------
void RobotomyRequestForm::executeAction() const
{
	std::srand(static_cast<unsigned>(std::time(NULL)));
	int random_number = std::rand() % 2;
	std::cout << "Makes some drilling noises..." << std::endl;
	if (random_number)
		std::cout << getTarget() << " has been robotomy successfully" << std::endl;
	else
		std::cout << "robotomy on " << getTarget() << " has failed" << std::endl; 
}