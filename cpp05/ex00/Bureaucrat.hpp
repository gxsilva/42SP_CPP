/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:20:50 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/16 21:42:20 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

#ifndef DEBUG
# define DEBUG 0
#endif

class Bureaucrat
{
	private:
		const std::string		_name;
		unsigned int			_grade;

	public:
		//OCCF
		Bureaucrat(void);
		Bureaucrat(const std::string &name, unsigned int grade);
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat& operator=(const Bureaucrat &b);
		~Bureaucrat(void);

		//EXCEPTIONS
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

		//METHODS
		void				gradeIncrease(int x = 1);
		void				gradeDecrease(int x = 1);

		//GETTER
		const std::string	&getName(void) const;
		unsigned int		getGrade(void) const;

		//STATIC 
		static unsigned int grade_max;
		static unsigned int grade_min;
};

std::ostream &operator<<(std::ostream &Os, const Bureaucrat &b);
std::ostream &operator<<(std::ostream &Os, const Bureaucrat *b);

#endif