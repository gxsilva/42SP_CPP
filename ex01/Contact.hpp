/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:08:34 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/16 18:50:53 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	public:
		void setContact(void);
		
		void setFirstName(void);
		void setLastName(void);
		void setNickName(void);
		void setPhoneNumber(void);
		void setDarkestSecret(void);

		const void getFullInfo(void);

		const std::string& getFirstName(void);
		const std::string& getLastName(void);
		const std::string& getNickName(void);
		const std::string& getPhoneNumber(void);
		const std::string& getDarkestSecret(void);
		
	private:
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickName;
		std::string		_phoneNumber;
		std::string		_darkestSecret;
};
