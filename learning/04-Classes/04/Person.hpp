/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:22:55 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/19 19:34:10 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector> //by 42 standard this is not allow
#pragma once

class Person
{

	public:
		typedef Person	p;
		Person		(std::string name, int age);
		~Person	(void);

		const std::string&	getName(void) const;
		const int			getAge(void) const;
		void				ReSetName(const std::string& newName);
		void				ReSetAge(int newAge);

		static void	addPerson(Person::p *newPerson);
		static int	getPersonCnt(void);
		static void	printPerson();
		static std::vector<Person::p>	__person_t;
		
	private:
		static int		__people;

		std::string		_name;
		int				_age;
};

