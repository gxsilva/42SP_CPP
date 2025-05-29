/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minotaur.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:36:41 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 18:28:22 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINOTAUR_HPP
# define MINOTAUR_HPP

#include <iostream>
#include "Human.hpp"
#include "Animal.hpp"

class Minotaur : public Human, public Animal
{
	private:
		std::string		_minotaurName;
		std::string		_minotaurWeapon;
		std::string		_minotaurPosition;
		
	public:
		Minotaur(void);
		Minotaur(std::string minotaurName, std::string minotaurWeapon, std::string minotaurPosition);

		Minotaur(const Minotaur& other);
		Minotaur &operator=(const Minotaur &other);

		~Minotaur();

		const std::string& getMinotaurName (void) const { return (this->_minotaurName); }
		const std::string& getMinotaurWeapon (void) const { return (this->_minotaurWeapon); }
		const std::string& getMinotaurPosition (void) const { return (this->_minotaurPosition); }

		void	brandish (void) const { std::cout << "Arghhhh Minotaur" << std::endl; }
		void	makeSound(void) const {std::cout << "MINOTAUROSSS" << std::endl; }
};

#endif

