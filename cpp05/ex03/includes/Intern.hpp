/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 00:01:42 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/11 00:53:43 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#ifndef DEBUG_INTERN
# define DEBUG_INTERN 0
#endif

class Intern
{
	private:
		AForm	*_createPreisdentialForm(const std::string &formTarget);
		AForm	*_createRobotomyForm(const std::string &formTarget);
		AForm	*_createShrubberyForm(const std::string &formTarget);
		
	public:
		//OCCF
		Intern(void);
		Intern(const Intern &i);
		Intern &operator=(const Intern &i);
		~Intern(void);

		//METHODS
		AForm	*makeForm(const std::string &formName, const std::string &formTarget);

		//EXCEPTIONS
		class InvalidFormCreation : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

#endif /* INTERN_HPP */