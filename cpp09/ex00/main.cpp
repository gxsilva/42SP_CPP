/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 04:15:15 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/14 04:15:49 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "Invalid input" << std::endl;
		return (1);
	}

	try {
		BitcoinExchange btc;
		btc.loadPriceDataBase("data.csv");
		btc.fetchExchangeRates(argv[1]);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}