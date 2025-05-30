/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:58:11 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/30 02:56:55 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
	protected:
		std::string type;
		
	public:
		AAnimal(void);

		AAnimal(const AAnimal& other);
		AAnimal &operator=(const AAnimal &other);

		virtual ~AAnimal(void);

		const std::string& getType(void) const;
		
		void setType (std::string animalType);

		virtual void makeSound(void) const = 0;
};

#endif

