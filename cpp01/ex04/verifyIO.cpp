/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifyIO.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 18:59:42 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/22 19:58:07 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

static	int canRead (std::string inputFileName)
{
	std::ifstream inputFile(inputFileName.c_str());
	
	return (inputFile.is_open());
}

static	int canWrite (std::string outputFileName)
{
	std::ofstream outputFile(outputFileName.c_str());
	
	return (outputFile.is_open());
}


int verifyIO(std::string inputFileName, std::string outputFileName)
{
	if (inputFileName.empty() || outputFileName.empty())
	{
		std::cout << "[Replace]: Files name can't be blank!\n";
		return (0);
	}
	if (!canRead(inputFileName))
	{
		std::cout << "[Replace]: Invalid input file name (or path to file)!\n";
		return (0);
	}
	if (!canWrite(outputFileName))
	{
		std::cout << "[Replace]: Invalid output file name (or path to file)!\n";
		return (0);
	}
	return (1);
}
