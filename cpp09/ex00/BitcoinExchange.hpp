/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 02:41:37 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/14 04:23:09 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <map> //std::map
#include <fstream> //read files
#include <exception> //std::exception
#include <string> //std::getline
#include <sstream> //std::strinstream
#include <cstdlib> //std::strol

#ifndef VERBOSE
# define VERBOSE 0
#endif

#ifndef DEBUG
# define DEBUG 0
#endif

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_price;

		bool validateDate(const std::string &date) const;
		bool validateBtc(const std::string &btc) const;
		
	public:
		//OCCF
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &b);
		BitcoinExchange& operator=(const BitcoinExchange &b);
		~BitcoinExchange();

		//METHODS
		void loadPriceDataBase(const std::string &filePath);
		void fetchExchangeRates(const std::string &inputFile) const;
};

#endif /* BITCOIN_EXCHANGE_HPP */