/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:50:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 03:15:13 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDONFORM_HPP
#define PRESIDENTIAL_PARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

#ifndef DEBUG_PRESIDENTIAL_PARDON
# define DEBUG_PRESIDENTIAL_PARDON 0
#endif

class PresidentialPardonForm : public AForm
{
	public:
		//OCCF
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string targetPath);
		PresidentialPardonForm(const PresidentialPardonForm &s);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &s);
		~PresidentialPardonForm();

		//METHODS
		void	executeAction() const;
};

#endif /* PRESIDENTIAL_PARDONFORM_HPP */

