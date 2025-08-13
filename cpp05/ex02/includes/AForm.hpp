/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:25:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 03:18:50 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
class Bureaucrat;

#ifndef DEBUG_AFORM
# define DEBUG_AFORM 0
#endif

class AForm
{
	private:
		const std::string	_name;
		const std::string	_target;
		bool				_signed;
		const unsigned int	_gradeRequiredToSign;
		const unsigned int	_gradeRequiredToExecute;
		
	public:
		//OOCF
		AForm(void);
		AForm(const std::string &name,
			unsigned int gradeRequiredToSign,
			unsigned int gradeRequiredToExecute,
			const std::string &target);
		AForm(const AForm &f);
		AForm &operator=(const AForm &f);
		virtual ~AForm(void);

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
		
		class UnsignedForm : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		//Getter
		const std::string	&getName(void) const;
		const std::string	&getTarget(void) const;
		bool				getSigned(void) const;
		unsigned int		getgradeRequiredToSign(void) const;
		unsigned int		gradeRequiredToExecute(void) const;

		//Methods
		void				beSigned(const Bureaucrat &b);
		void				execute(Bureaucrat const & executor) const; //<- ugly

		//Virtual functions
		virtual void		executeAction() const = 0;
};

//OVERLOADING
std::ostream &operator<<(std::ostream &Os, const AForm &f);
std::ostream &operator<<(std::ostream &Os, const AForm *f);

#endif //AFORM_HPP
