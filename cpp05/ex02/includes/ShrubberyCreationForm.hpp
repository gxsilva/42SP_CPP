/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 20:50:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 03:16:19 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "AForm.hpp"

#ifndef DEBUG_SHRUBBERY_CREATION
# define DEBUG_SHRUBBERY_CREATION 0
#endif

class ShrubberyCreationForm : public AForm
{
	public:
		//OCCF
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string targetPath);
		ShrubberyCreationForm(const ShrubberyCreationForm &s);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &s);
		~ShrubberyCreationForm();

		//METHODS
		void	executeAction() const;

};

#endif /* SHRUBBERY_CREATION_FORM_HPP */