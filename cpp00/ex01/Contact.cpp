/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:32:48 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/05 14:48:32 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

void Contact::setFirstName()
{
	std::string str;
	bool onlyAlpha = true;

	do
	{
		std::cout << "First Name: ";
		getline(std::cin, str);
		if (str.empty())
		{
			std::cout << "> [PhoneBook]: First Name can't be blank\n";
			continue;
		}
		for (size_t i = 0; i < str.length(); ++i)
		{
			if (!isalpha(str[i]))
			{
				onlyAlpha = false;
				break;
			}
		}
		if (!onlyAlpha)
		{
			std::cout << "> [PhoneBook]: First Name must contain only alphabetic characters\n";
			onlyAlpha = true;
			continue;
		}
		this->_firstName = str;
		break;
	}
	while (true);
}

void Contact::setLastName()
{
	std::string str;
	bool onlyAlpha = true;

	do
	{
		std::cout << "Last Name: ";
		getline(std::cin, str);
		if (str.empty())
		{
			std::cout << "> [PhoneBook]: Last Name can't be blank\n";
			continue;
		}
		for (size_t i = 0; i < str.length(); ++i)
		{
			if (!isalpha(str[i]))
			{
				onlyAlpha = false;
				break;
			}
		}
		if (!onlyAlpha)
		{
			std::cout << "> [PhoneBook]: Last Name must contain only alphabetic characters\n";
			onlyAlpha = true;
			continue;
		}
		this->_lastName = str;
		break;
	}
	while (true);
}

void Contact::setNickName()
{
	std::string str;

	do
	{
		std::cout << "Nick Name: ";
		getline(std::cin, str);
		if (str.empty())
		{
			std::cout << "> [PhoneBook]: Nick Name can't be blank\n";
			continue;
		}
		this->_nickName = str;
		break;
	}
	while (true);
}

void Contact::setPhoneNumber()
{
	std::string str;
	bool onlyAlpha = true;

	do
	{
		std::cout << "Phone Number: ";
		getline(std::cin, str);
		if (str.empty())
		{
			std::cout << "> [PhoneBook]: Phone number can't be blank\n";
			continue;
		}
		for (size_t i = 0; i < str.length(); i++)
		{
			if (!isdigit(str[i]))
			{
				onlyAlpha = false;
				break;
			}
		}
		if (!onlyAlpha)
		{
			onlyAlpha = true;
			std::cout << "> [PhoneBook]: Phone number must contain only numeric characters\n";
			continue;;
		}
		this->_phoneNumber = str;
		break;
	}
	while (true);
}

void Contact::setDarkestSecret()
{
	std::string str;

	do
	{
		std::cout << "Darkest Secret: ";
		getline(std::cin, str);
		if (str.empty())
		{
			std::cout << "> [PhoneBook]: Darkest Secret can't be blank\n";
			continue;
		}
		this->_darkestSecret = str;
		break;
	}
	while (true);
}

void Contact::setContact(void)
{
	this->setFirstName();
	this->setLastName();
	this->setNickName();
	this->setPhoneNumber();
	this->setDarkestSecret();
	std::cout << "> [PhoneBook]: New contact add!\n";
}

void Contact::getFullInfo(void)
{
	std::cout << "First Name: "<< this->getFirstName() << std::endl;
	std::cout << "Last Name: "<< this->getLastName() << std::endl;
	std::cout << "Nick Name: "<< this->getNickName() << std::endl;
	std::cout << "Phone Number: "<< this->getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: "<< this->getDarkestSecret() << std::endl;
}


const std::string& Contact::getFirstName() {return (this->_firstName);}
const std::string& Contact::getLastName() {return (this->_lastName);}
const std::string& Contact::getNickName() {return (this->_nickName);}
const std::string& Contact::getPhoneNumber() {return (this->_phoneNumber);}
const std::string& Contact::getDarkestSecret() {return (this->_darkestSecret);}