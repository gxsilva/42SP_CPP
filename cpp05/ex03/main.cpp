/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:22:10 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/11 00:55:22 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Bureaucrat.hpp"
#include "./includes/AForm.hpp"
#include "./includes/Intern.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"

void testValidBureaucrat()
{
	try
	{
		Bureaucrat A("Alice", 50);
		std::cout << A << std::endl;
		A.gradeIncrease();
		std::cout << "After grade increase: " << A << std::endl;
		A.gradeDecrease();
		std::cout << "After grade decrease: " << A << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testShrubberyForm()
{
	try
	{
		Bureaucrat john("John", 136);
		std::cout << john << std::endl;

		ShrubberyCreationForm shrubberyForm("garden");
		std::cout << "------FORM INFORMATION (OP OVERLOADING)------" << std::endl;
		std::cout << shrubberyForm << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "John attempts to sign the ShrubberyCreationForm..." << std::endl;
		shrubberyForm.beSigned(john);
		std::cout << "Form signed status: " << (shrubberyForm.getSigned() ? "Signed" : "Not Signed") << std::endl;

		std::cout << "John attempts to execute the ShrubberyCreationForm..." << std::endl;
		shrubberyForm.execute(john);
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void testRobotomyRequestForm()
{
	try
	{
		Bureaucrat bob("Bob", 32);
		std::cout << bob << std::endl;

		RobotomyRequestForm robotomyForm("target1");
		std::cout << "------FORM INFORMATION (OP OVERLOADING)------" << std::endl;
		std::cout << robotomyForm << std::endl;
		std::cout << "---------------------------------------------" << std::endl;

		std::cout << "Bob attempts to sign the RobotomyRequestForm..." << std::endl;
		robotomyForm.beSigned(bob);
		std::cout << "Form signed status: " << (robotomyForm.getSigned() ? "Signed" : "Not Signed") << std::endl;

		std::cout << "Bob attempts to execute the RobotomyRequestForm..." << std::endl;
		robotomyForm.execute(bob);
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}


void testPresidentialPardonForm()
{
	try
	{
		Bureaucrat charles("Charles", 5);
		std::cout << charles << std::endl;

		PresidentialPardonForm pardonForm("target2");
		std::cout << "------FORM INFORMATION (OP OVERLOADING)------" << std::endl;
		std::cout << pardonForm << std::endl;
		std::cout << "---------------------------------------------" << std::endl;

		std::cout << "Charles attempts to sign the PresidentialPardonForm..." << std::endl;
		pardonForm.beSigned(charles);
		std::cout << "Form signed status: " << (pardonForm.getSigned() ? "Signed" : "Not Signed") << std::endl;

		std::cout << "Charles attempts to execute the PresidentialPardonForm..." << std::endl;
		pardonForm.execute(charles);
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void testExecuteForm()
{
	try
	{
		Bureaucrat executor("Executor", 1);
		std::cout << executor << std::endl;

		ShrubberyCreationForm shrubberyForm("park");
		RobotomyRequestForm robotomyForm("robot_target");
		PresidentialPardonForm pardonForm("criminal");

		std::cout << "\nExecutor attempts to sign all forms..." << std::endl;
		shrubberyForm.beSigned(executor);
		robotomyForm.beSigned(executor);
		pardonForm.beSigned(executor);

		std::cout << "Form signed status: " << (shrubberyForm.getSigned() ? "Signed" : "Not Signed") << std::endl;
		std::cout << "Form signed status: " << (robotomyForm.getSigned() ? "Signed" : "Not Signed") << std::endl;
		std::cout << "Form signed status: " << (pardonForm.getSigned() ? "Signed" : "Not Signed") << std::endl;

		std::cout << "\nExecutor attempts to execute ShrubberyCreationForm..." << std::endl;
		executor.executeForm(shrubberyForm);

		std::cout << "\nExecutor attempts to execute RobotomyRequestForm..." << std::endl;
		executor.executeForm(robotomyForm);

		std::cout << "\nExecutor attempts to execute PresidentialPardonForm..." << std::endl;
		executor.executeForm(pardonForm);
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

void testIntern()
{
	try
	{
		Intern intern;
		std::cout << "Intern creates forms:" << std::endl;

		AForm *shrubberyForm = intern.makeForm("shrubbery creation", "garden");
		std::cout << *shrubberyForm << std::endl;
		delete shrubberyForm;

		AForm *robotomyForm = intern.makeForm("robotomy request", "target1");
		std::cout << *robotomyForm << std::endl;
		delete robotomyForm;

		AForm *pardonForm = intern.makeForm("presidential pardon", "target2");
		std::cout << *pardonForm << std::endl;
		delete pardonForm;

		std::cout << "Intern attempts to create an unknown form:" << std::endl;
		AForm *unknownForm = intern.makeForm("unknown form", "target3");
		delete unknownForm;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

int main(void)
{
	std::cout << "Testing valid Bureaucrat:" << std::endl;
	testValidBureaucrat();

	std::cout << "\nTesting Shrubbery Form:" << std::endl;
	testShrubberyForm();

	std::cout << "\nTesting Robotomy Request Form:" << std::endl;
	testRobotomyRequestForm();
	
	std::cout << "\nTesting Presidential Pardon Form:" << std::endl;
	testPresidentialPardonForm();

	std::cout << "\nTesting Execute form:" << std::endl;
	testExecuteForm();
	
	std::cout << "\nTesting Intern class:" << std::endl;
	testIntern();
	
	return 0;
}