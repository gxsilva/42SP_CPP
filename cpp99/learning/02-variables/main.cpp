/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:04:10 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 19:09:57 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	//char * -> is deprecated now is string
	//float and double still being used
	char			singleChar = 'L';
	char			oldString[] = "this still been suported";
	std::string		MyString = "wtf is this type??";
	bool			isTrue = true;
	bool			isFalse = false;
	int				i = 10;
	int				sum = i + 15; // 25
	
	std::cout << i << "\n";
	std::cout << "type Char: " <<  singleChar << "\n";
	std::cout << "type String: " << MyString << "\n";
	std::cout << "This will print: " << isTrue << "\n"; //1
	std::cout << "This will print: " << isFalse << "\n";//0
	
	return (0);
}