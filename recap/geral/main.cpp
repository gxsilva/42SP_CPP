/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:58:30 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/04 21:13:55 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //Input output stream
#include <functional> // to be able hold function in variables
#include <vector> // be able to use linked list as array



//using namespace -> is not allow 

namespace not_allow
{
	int add(int x, int y) { return (x + y); }
}

// Operator overloading
int		add(int x, int y) { return (x + y); }
float	add(float x, float y) { return (x + y); }

//Function with standart value
int		multiply(int x, int y = 12) { return (x * y); }

int main(int argc, char **argv)
{
	std::string firstName = "Dinossauro";
	std::string lastName = "Silva";
	std::string userName;
	std::string otherName;
	int			valueOption;
	std::string fullName = firstName.append(" " + lastName);
	//-----------------------------------------------------------

	std::cout << "Full Name: " << fullName << "\n";
	std::cout << "First Letter with Array: " << fullName[0] << "\n";
	std::cout << "First Letter with methods: " << fullName.front() << "\n";
	std::cout << "Last Letter: " << fullName.back() << "\n";

	std::cout << "\n";
	
	std::cout << "Sum namespace: " << not_allow::add(5, 10) << "\n";
	std::cout << "Sum normal: " << add(5, 10) << "\n";
	//-----------------------------------------------------------

	//Hold a function as a variable
	std::function<int(int x, int y)>function_variable = not_allow::add;

	//-----------------------------------------------------------
	std::cout << "Type your name: ";
	std::cin >> userName;
	std::cout << "Type your last name: ";
	getline(std::cin, otherName);
	//-----------------------------------------------------------
	std::cout << "Value option [0 - 2]: ";
	std::cin >> valueOption;

	switch (valueOption)
	{
	case 0:
		std::cout << "Zero" << std::endl;
	break;
	case 1:
		std::cout << "One" << std::endl;
	break;
	case 2:
		std::cout << "Two" << std::endl;
	default:
		std::cout << "Invalid opt" << std::endl;
		break;
	}
	//-----------------------------------------------------------

std::vector<std::string> colors; //the same as char **;
	
	//vector methods
	colors.push_back("Green"); //[1]
	colors.push_back("Yellow"); //[2]
	colors.push_back("Purple"); //[3]
	colors.insert(colors.begin(), "Red"); // [0]
	for (int i = 0; i < colors.size(); i++)
		std::cout << "Colors[" << i << "]:" << colors[i] << "\n";


	//-----------------------------------------------------------
	std::cout << "Both int: " << add(8, 2) << std::endl;
	std::cout << "Both Float: " << add(2.5f, 3.7f) << std::endl;
}
