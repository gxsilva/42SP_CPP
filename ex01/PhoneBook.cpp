/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:36:00 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/15 22:14:06 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

Contact& PhoneBook::getContact(int index)
{
	return (this->contactList[index]);
}

void	PhoneBook::addContact(void)
{
	int*		pst = this->getIndex();
	
	Contact mainContact = this->getContact((*pst)++);
	mainContact.setContact();
}

int*	PhoneBook::getIndex(void)
{
	static int		pst;

	if (pst > 8)
		pst %= 8;
	return (&pst);
}

void	PhoneBook::searchContact(void)
{
	Contact	tmp_contact;
	int		*pst = this->getIndex();

	if (!pst)
	{
		std::cout << "> [PhoneBook]: No contact found\n";
		return ;
	}
	for (int i = 0; i < *pst; i++)
	{
		tmp_contact = getContact(i);
		tmp_contact.getFirstName();
		tmp_contact.getLastName();
		tmp_contact.getNickName();
		tmp_contact.getPhoneNumber();
		tmp_contact.getDarkestSecret();
		std::cout << "\n";
	}
}