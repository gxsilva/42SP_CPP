/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:03:00 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/11 21:21:36 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER
#define SCALAR_CONVERTER

#include <iostream>
#include <string>
#include <cctype>
#include <limits>
#include <cerrno>
#include <iomanip>
#include <cstdlib>
/*
Pseudo literals to handle
inff, +inff, nanf, nan
*/

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define PURPLE "\e[35m"


class ScalarConverter
{
	private:
	//OCCF
		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(const ScalarConverter& s);
		ScalarConverter &operator=(const ScalarConverter &s);

		static const std::string		impossibleStr;

	//Auxilar methods
		static std::string	sanitizeStr(const std::string &input);
	
		static bool			isPseudoLiteral(const std::string &input);
		static bool			isChar(const std::string &input);
		static bool			isInteger(const std::string &input);
		static bool			isFloat(const std::string &input);
		
		static void			convertPseudo(const std::string &input);
		static void			convertChar(const std::string &input);
		static void			convertInt(const std::string &input);

	public:
		static void			convert(const std::string &input);
};


#endif