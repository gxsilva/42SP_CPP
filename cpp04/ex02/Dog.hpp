/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:19:21 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/30 02:58:38 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public AAnimal
{
	private:
		Brain*	_dogBrain;
		
	public:
		Dog(void);

		Dog(const Dog& other);
		Dog &operator=(const Dog &other);

		~Dog();

		void makeSound(void) const;
};

#endif

