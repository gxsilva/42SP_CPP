/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:24:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 03:20:40 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

//------------------OCCF-----------------
ShrubberyCreationForm::ShrubberyCreationForm(void)
: AForm("ShrubberyCreationForm", 145, 137, "default")
{
	if (DEBUG_SHRUBBERY_CREATION)
		std::cout << "[Shruberry]: Default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string targetPath)
: AForm("ShrubberyCreationForm", 145, 137, targetPath)
{
	if (DEBUG_SHRUBBERY_CREATION)
		std::cout << "[Shruberry]: Parameterized constructor called" << std::endl;
	return ;
}

//ShrubberyCreationForm -> AForm(const AForm &f)
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s)
: AForm(s)
{
	if (DEBUG_SHRUBBERY_CREATION)
		std::cout << "[Shruberry]: Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	if (DEBUG_SHRUBBERY_CREATION)
		std::cout << "[Shruberry]: Default destructor called" << std::endl;
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s)
{
	if (this != &s)
		ShrubberyCreationForm::AForm::operator=(s);
	return (*this);
}

//------------------METHODS-----------------
void ShrubberyCreationForm::executeAction() const
{
	std::ostringstream	fileName;
	fileName << getTarget() << "_shrubbery";

	std::ofstream outputShrubbery(fileName.str().c_str());
	if (!outputShrubbery)
	{
		std::cout << "Error: Cannot write to file '" << fileName.str() << "'" << std::endl;
		return ;
	}
	
	outputShrubbery << "         # #### ####" << std::endl;
	outputShrubbery << "       ### \\/#|### |/####" << std::endl;
	outputShrubbery << "      ##\\/#/ \\||/##/_/##/_#" << std::endl;
	outputShrubbery << "    ###  \\/###|/ \\/ # ###" << std::endl;
	outputShrubbery << "  ##_\\_#\\_\\## | #/###_/_####" << std::endl;
	outputShrubbery << " ## #### # \\ #| /  #### ##/##" << std::endl;
	outputShrubbery << " __#_--###`  |{,###---###-~" << std::endl;
	outputShrubbery << "            \\ }{" << std::endl;
	outputShrubbery << "             }}{" << std::endl;
	outputShrubbery << "             }}{" << std::endl;
	outputShrubbery << "             {{}" << std::endl;
	outputShrubbery << "       , -=-~{ .-^- _" << std::endl;
	outputShrubbery.close();
}