/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 02:10:41 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/12 02:54:54 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
private:
	const	std::string _name;
	unsigned int		_age;
	
public:
	//OCCF
	Data(const std::string name, int age);
	Data(const Data &d);
	Data &operator=(const Data &d);
	~Data();

	//GETTER
	const std::string &getName(void) const;
	int	getAge(void) const;
};

#endif /* DATA_HPP */