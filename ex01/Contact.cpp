/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:32:48 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/15 21:45:40 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

void Contact::setFirstName()
{
	std::string str;

	std::cout << "First Name: ";
	getline(std::cin, str);
	this->_firstName = str;
}

void Contact::setLastName()
{
	std::string str;

	std::cout << "Last Name: ";
	getline(std::cin, str);
	this->_lastName = str;
}

void Contact::setNickName()
{
	std::string str;

	std::cout << "Nick Name: ";
	getline(std::cin, str);
	this->_nickName = str;
}

void Contact::setPhoneNumber()
{
	std::string str;

	std::cout << "Phone Number: ";
	getline(std::cin, str);
	this->_phoneNumber = str;
}

void Contact::setDarkestSecret()
{
	std::string str;

	std::cout << "Darkest Secret: ";
	getline(std::cin, str);
	this->_darkestSecret = str;
}

void Contact::setContact(void)
{
	Contact::setFirstName();
	Contact::setLastName();
	Contact::setNickName();
	Contact::setPhoneNumber();
	Contact::setDarkestSecret();
	std::cout << "> [PhoneBook]: New contact add!\n";
}

const std::string Contact::getFirstName() {return (this->_firstName);}
const std::string Contact::getLastName() {return (this->_lastName);}
const std::string Contact::getNickName() {return (this->_nickName);}
const std::string Contact::getPhoneNumber() {return (this->_phoneNumber);}
const std::string Contact::getDarkestSecret() {return (this->_darkestSecret);}