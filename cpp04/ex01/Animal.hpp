/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:58:11 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 18:08:25 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
		
	public:
		Animal(void);

		Animal(const Animal& other);
		Animal &operator=(const Animal &other);

		virtual ~Animal(void);

		const std::string& getType(void) const;
		
		virtual void makeSound(void) const;
};

#endif

