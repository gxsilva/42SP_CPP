/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pet.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:53:58 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/24 23:40:58 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Pet_H
#define Pet_H

#include <iostream>

class Pet
{
private:
	std::string		_name;
public:
	Pet& operator=(const Pet& pet);
	Pet(std::string name) : _name(name) { return ; };
	Pet(const Pet &petCopy) : _name(petCopy._name) { return ; };
	~Pet(void) { return ; };
};

Pet& Pet::operator=(const Pet& pet)
{
	if (this != &pet)
		_name = pet._name;
}

#endif // Pet_H