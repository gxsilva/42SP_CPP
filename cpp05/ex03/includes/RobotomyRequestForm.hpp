/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:30:28 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 03:19:54 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include <iostream>
#include "AForm.hpp"

#ifndef DEBUG_ROBOTOMY_REQUEST
# define DEBUG_ROBOTOMY_REQUEST 0
#endif

class RobotomyRequestForm : public AForm
{
	public:
		//OOCF
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string targetPath);
		RobotomyRequestForm(const RobotomyRequestForm &s);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &s);
		~RobotomyRequestForm();

		//METHODS
		void	executeAction() const;
};

#endif /* ROBOTOMY_REQUEST_FORM_HPP */
