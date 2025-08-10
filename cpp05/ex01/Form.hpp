/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:25:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/10 18:53:11 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
class Bureaucrat;

#ifndef DEBUG_FORM
# define DEBUG_FORM 0
#endif

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_gradeRequiredToSign;
		const unsigned int	_gradeRequiredToExecute;
		
	public:
		//OOCF
		Form(const std::string name, unsigned int gradeRequiredToSign, unsigned int gradeRequiredToExecute);
		Form(const Form &f);
		Form &operator=(const Form &f);
		~Form(void);

		//Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		//Getter
		const std::string	&getName(void) const;
		bool				getSigned(void) const;
		unsigned int		getgradeRequiredToSign(void) const;
		unsigned int		gradeRequiredToExecute(void) const;

		//Methods
		void				beSigned(const Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &Os, const Form &f);
std::ostream &operator<<(std::ostream &Os, const Form *f);

#endif
