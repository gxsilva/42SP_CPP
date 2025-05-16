/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:36:03 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/15 22:15:01 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public:
	
		Contact& 	getContact(int index);
		void		addContact(void);
		void		searchContact(void);
		int*			getIndex(void);
		
	private:
		Contact		contactList[8];
};


