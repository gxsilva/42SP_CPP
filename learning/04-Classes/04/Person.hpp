/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:22:55 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/19 15:20:34 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#pragma once

class Person
{
	public:
		Person		(std::string name, int age);
		~Person	(void);

		const std::string&	getName(void) const;
		const int			getAge(void) const;
		void				ReSetName(const std::string& newName);
		void				ReSetAge(int newAge);

		static void	addPerson(void);
		static int getPersonCnt(void);
		
	private:
		static int		__people;

		std::string		_name;
		int				_age;
};

