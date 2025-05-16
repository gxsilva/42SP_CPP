/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:36:00 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/16 19:14:29 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	index = 0;

Contact& PhoneBook::getContact(int index)
{
	return (this->contactList[index]);
}

void	PhoneBook::addContact(void)
{
	Contact newContact;
	int		tmp_i = index;

	if (tmp_i > 7)
		tmp_i %= 8;
	newContact.setContact();
	this->contactList[tmp_i] = newContact;
	index++;
}

static std::string	formatField(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return std::string(10 - str.length(), ' ') + str;
}
void PhoneBook::searchIndex(void)
{
	std::string input;
	int max_index = (index > 8) ? 8 : index;

	while (true)
	{
		std::cout << "> [PhoneBook]: Search for an index (0-" << max_index - 1 << ")\n";
		std::cout << "th> ";
		std::getline(std::cin, input);

		if (input.length() == 1 && std::isdigit(input[0]))
		{
			int idx = input[0] - '0';
			if (idx >= 0 && idx < max_index)
			{
				if (this->getContact(idx).getFirstName().empty())
				{
					std::cout << "> [PhoneBook]: No contact at this index.\n";
					continue;
				}
				this->getContact(idx).getFullInfo();
				break;
			}
			else
				std::cout << "> [PhoneBook]: Invalid index. Please enter a number between 0 and " << max_index - 1 << ".\n";
		}
		else
			std::cout << "> [PhoneBook]: Please enter a valid single-digit index (0-" << max_index - 1 << ").\n";
	}
}

void	PhoneBook::searchContact(void)
{
	if (index == 0)
	{
		std::cout << "> [PhoneBook]: No contact found\n";
		return ;
	}
	std::cout << "     Index | First Name | Last Name  | Nickname \n";
	for (int i = 0; i < 8; i++)
	{
		Contact &tmp_contact = this->getContact(i);
		if (tmp_contact.getFirstName().empty())
			continue;
		std::cout << "         " << i << " | "
				  << formatField(tmp_contact.getFirstName()) << " | "
				  << formatField(tmp_contact.getLastName()) << " | "
				  << formatField(tmp_contact.getNickName()) << "\n";
	}
	std::cout << "\n";
	this->searchIndex();
}
