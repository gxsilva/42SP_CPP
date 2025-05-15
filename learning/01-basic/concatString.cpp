/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concatString.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:27:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 18:35:06 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// using namespace std;

int main(int arcg, char **argv)
{
	// + = append = concat
	std::string		firstName = "Random";
	std::string		secondName = "Another";
	std::string		fullName = firstName.append(" " + secondName);

	std::cout << firstName + " " + secondName << "\n";
	std::cout << "The full name with append is: " << fullName << "\n";
	std::cout << "The full name has : " << fullName.length() << " letters\n";
	//some thing but using the size() function, is the same as length()
	std::cout << "The full name has : " << fullName.size() << " letters\n";
	std::cout << "The last char is: " << fullName[fullName.length() - 1] << "\n";
	std::cout << "The fisrt char is: " << fullName[0] << "\n";
	std::cout << "OR  The fisrt char is: " << fullName.at(0) << "\n";
	return (0);
}