/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 03:48:05 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/14 04:23:23 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//----------------OCCF--------------
BitcoinExchange::BitcoinExchange(void)
{
	if (DEBUG)
		std::cout << "[BitcoinExchange]: Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& b)
: _price(b._price)
{
	if (DEBUG)
		std::cout << "[BitcoinExchange]: Copy constructor called" << std::endl;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& b)
{
	if (DEBUG)
		std::cout << "[BitcoinExchange]: Assign constructor called" << std::endl;
	if (this != &b)
		_price = b._price;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{
	if (DEBUG)
		std::cout << "[BitcoinExchange]: Default Destructor called" << std::endl;
}

//-----------------METHODS------------------------
void BitcoinExchange::loadPriceDataBase(const std::string &filePath)
{
	std::ifstream file(filePath.c_str());

	if (!file.is_open())
		throw (std::runtime_error("Error: Unable to open file: " + filePath));

	std::string line;
	if (!std::getline(file, line)) // Skip header line
		throw (std::runtime_error("Error: File is empty or missing header."));

	while (std::getline(file, line))
	{
		std::stringstream	ss(line);
		std::string 		price;
		std::string			date;

		if (!std::getline(ss, date, ',') || !std::getline(ss, price))
		{
			if (VERBOSE)
				std::cout << "Warning: Malformed line skipped: " << line << std::endl;
			continue;
		}
		_price[date] = atof(price.c_str());
		continue ;
	}
}

void BitcoinExchange::fetchExchangeRates(const std::string &inputFile) const
{
	std::ifstream file(inputFile.c_str());

	if (!file.is_open())
		throw std::runtime_error("Error: Unable to open file: " + inputFile);

	std::string line;

	std::getline(file, line);
	while (std::getline(file, line))
	{
		if (line.empty())
		{
			if (VERBOSE)
				std::cout << "Warning: Malformed or empty line, skipped: " << line << std::endl;
			continue ;
		}
		std::stringstream ss(line);
		std::string		date;
		std::string		btcAmount;

		if (!std::getline(ss, date, '|') || !std::getline(ss, btcAmount))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			if (VERBOSE)
				std::cout << "Warning: Malformed line skipped: " << line << std::endl;
			continue;
		}

		if (!date.empty() && date[date.size() - 1] == ' ')
			date.erase(date.size() - 1);
		if (!btcAmount.empty() && btcAmount[0] == ' ')
			btcAmount.erase(0, 1);

		if (!validateDate(date))
		{
			if (VERBOSE)
				std::cout << "Warning: Validate Date: " << line << std::endl;
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		if (!validateBtc(btcAmount))
		{
			if (VERBOSE)
				std::cout << "Warning: Validate Bitcoin amount: " << line << std::endl;
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}

		double btcValue = atof(btcAmount.c_str());
		std::map<std::string, double>::const_iterator it = _price.lower_bound(date);
		if (it == _price.end())
			it--;
		else if (it->first != date)
		{
			if (it == _price.begin())
			{
				std::cout << "No early date available for " << date << std::endl;
				continue ;
			}
			it--;
		}
		double	resultFetch = it->second * btcValue;
		std::cout << date << " => " << btcValue << " = " << resultFetch << std::endl;
	}
}

//-----------------PRIVATE METHODS------------------------

bool BitcoinExchange::validateDate(const std::string &date) const
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return (false);

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
		return (false);
	return (true);
}

bool BitcoinExchange::validateBtc(const std::string &btc) const
{
	char* end;
	double val = std::strtod(btc.c_str(), &end);

	if (*end != '\0')
	{
		if (VERBOSE)
			std::cout << "Warning: Malformed line" << std::endl;
		return (false);
	}
	if (val < 1 || val > 1000)
	{
		if (VERBOSE)
			std::cout << "Warning: Invalid input bitcoin range" << std::endl;
		return (false);
	}
	return (true);
}

//-----------------------EXCEPTIONS---------------

// BitcoinExchange::BitcoinFileError::BitcoinFileError(std::string &m)
// : _errorMessage(m)
// { };

// BitcoinExchange::BitcointInputError::BitcointInputError(std::string &m)
// : _errorMessage(m)
// { };

// const char *BitcoinExchange::BitcoinFileError::what() const throw()
// {
// 	return (_errorMessage.c_str());
// }

// const char *BitcoinExchange::BitcointInputError::what() const throw()
// {
// 	return (_errorMessage.c_str());
// }

