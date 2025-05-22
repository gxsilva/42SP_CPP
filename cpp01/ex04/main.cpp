/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 18:41:22 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/22 19:57:50 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./replacer.hpp"


int main(int argc, const char **argv)
{
	std::string line;

	if (argc == 4)
	{
		std::string inputFileName = argv[1];
		std::string outputFileName;
		std::ostringstream outputFileNameOS;

		outputFileNameOS << inputFileName << ".replace";
		outputFileName = outputFileNameOS.str();
		if (!verifyIO(inputFileName, outputFileName))
			return (1);
		
		std::ifstream inputFile(inputFileName.c_str());
		std::ofstream outputFile(outputFileName.c_str());
		
		while (std::getline(inputFile, line))
		{
			for (size_t i = 0; i < line.length(); i++)
			{
				if (line.substr(i, std::strlen(argv[2])).compare(argv[2]) == 0)
				{
					outputFile << argv[3];
					i += (std::strlen(argv[2]) - 1);
				}
				else
					outputFile << line.at(i);
			}
			outputFile << '\n';
		}
	}
	else
	{
		std::cout << "[Replace]: Invalid amount of args\n";
		std::cout << "[Replace]: in order to use: <FILENAME> <S1> <S2>\n";
	}
	return (0);
}