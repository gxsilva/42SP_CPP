/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:39:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/11 21:23:57 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//-------------STATIC ATTRIBTUES----------
const std::string ScalarConverter::impossibleStr = RED + std::string("impossible") + RESET;


//-------------METHODS--------------------

//-------------IS_SOMETHING----------------
bool ScalarConverter::isPseudoLiteral(const std::string &inputSanitize)
{
	std::string		pseudo[] = {"inf", "+inf", "-inf", "inff", "+inff", "-inff", "nanf", "+nanf", "-nanf", "nan", "+nan", "-nan"};
	bool			isPseudo = false;

	for (unsigned long i = 0; i < (sizeof(pseudo) / sizeof(std::string)); i++)
	{
		if (!pseudo[i].compare(inputSanitize))
		{
			isPseudo = true;
			break;
		}
		continue ;
	}
	return (isPseudo);
}

bool ScalarConverter::isChar(const std::string &input)
{
	if (input[0] == '\'' && isascii(input[1]) && input[2] == '\'')
		return (true);
	else if(input.length() == 1 && isalpha(input[0]))
		return (true);
	return (false);
}

bool ScalarConverter::isInteger(const std::string &input)
{
	char		*rest;
	long int	value;

	errno = 0;
	value = std::strtol(input.c_str(), &rest, 10);
	if (errno == ERANGE)
		return (false);
	if (*rest != '\0')
		return (false);
	if (rest == input.c_str())
		return (false);
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		return (false);
	return (true);
}

bool ScalarConverter::isFloat(const std::string &input)
{
	
}


//-------------CONVERT-------------------
void ScalarConverter::convertPseudo(const std::string &inputSanitize)
{
    std::string tmp = (inputSanitize.at(0) == '+')
        ? inputSanitize.substr(1)
        : inputSanitize;
	std::cout << "char: " << ScalarConverter::impossibleStr << std::endl;
	std::cout << "int: " << ScalarConverter::impossibleStr << std::endl;
	if (!tmp.compare("inff") || !tmp.compare("+inff") || !tmp.compare("-inff"))
	{
		std::cout << "float: " << YELLOW + tmp + RESET << std::endl;
		std::cout << "double: " << YELLOW + tmp.substr(0, tmp.size() - 1) + RESET << std::endl;
	}
	else if (!tmp.compare("inf") || !tmp.compare("+inf") || !tmp.compare("-inf"))
	{
		std::cout << "float: " << ScalarConverter::impossibleStr << std::endl;
		std::cout << "double: " << YELLOW + tmp + RESET << std::endl;
	}
	else
	{
		std::cout << "float: " << YELLOW << "nanf" << RESET << std::endl;
		std::cout << "double: " << YELLOW << "nan" << RESET << std::endl;
	}
}

void ScalarConverter::convertChar(const std::string &inputSanitize)
{
	if(inputSanitize[0] == '\'')
		std::cout << "char: " << GREEN + inputSanitize + RESET << std::endl;
	else
		std::cout << "char: " << GREEN << "\'"  << inputSanitize  << "\'" <<  RESET << std::endl;
	std::cout << "int: " << GREEN << static_cast<int>(inputSanitize[0]) << RESET << std::endl;
	std::cout << "float: " << GREEN << static_cast<float>(inputSanitize[0]) << RESET << std::endl;
	std::cout << "double: " << GREEN << static_cast<double>(inputSanitize[0]) << RESET << std::endl;

}

void ScalarConverter::convertInt(const std::string &input)
{
	int		integerValue = atoi(input.c_str());

	if (integerValue < std::numeric_limits<char>::min() || integerValue > std::numeric_limits<char>::max()) // 2000 -> verify if it realys fit
		std::cout << "char: " << ScalarConverter::impossibleStr << std::endl;
	else if (isprint(static_cast<unsigned char>(integerValue))) //-> 2000 -> truncate to 256(it not printable)
		std::cout << "char: " << GREEN << static_cast<char>(integerValue) << RESET << std::endl;
	else
		std::cout << "char: " << YELLOW << "Non displayable" << RESET << std::endl;
	std::cout << "int: " << GREEN << integerValue << RESET << std::endl;
	std::cout << "float: " << GREEN << static_cast<float>(integerValue) << "f" << RESET << std::endl;
	std::cout << "double: " << GREEN << static_cast<double>(integerValue) << RESET << std::endl;
}

//-----------AUXILIARY------------------
void	ScalarConverter::convert(const std::string &strValue)
{
	std::cout << std::fixed << std::setprecision(1); //iomanip (input output manipulation)
	
	std::string	sntString = sanitizeStr(strValue);
	if(ScalarConverter::isPseudoLiteral(sntString))
		convertPseudo(sntString);
	else if(ScalarConverter::isChar(strValue))
		convertChar(strValue);
	else if(ScalarConverter::isInteger(sntString))
		convertInt(sntString);
	else if (ScalarConverter::isFloat(sntString))
		convertFloat(sntString);
}

std::string		ScalarConverter::sanitizeStr(const std::string &input)
{
	std::string		newStr = input;
	
	if (newStr.empty())
		return (input);

	size_t			start = 0;
	size_t			end = newStr.size() - 1;
	
	while (start < newStr.size() && std::isspace(static_cast<unsigned char>(newStr[start])))
		start++;
	while (end > 0 && std::isspace(static_cast<unsigned char>(newStr[end])))
		end--;
	newStr = newStr.substr(start, (end - start) + 1);
	start = -1;
	while(++start < newStr.size())
	{
		if (std::isalpha(static_cast<unsigned char>(newStr[start])))
			newStr[start] = std::tolower(static_cast<unsigned char>(newStr[start]));
	}
	return (newStr);
}

//---------------------OCCF-----------------
ScalarConverter::ScalarConverter(void) { return ;}

ScalarConverter::~ScalarConverter(void) { return ;}

ScalarConverter::ScalarConverter(const ScalarConverter& s)
{
	(void)s;
	return ;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter& s)
{
	(void)s;
	return (*this);
}