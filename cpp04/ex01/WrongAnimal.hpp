/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:54:38 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 17:58:48 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
		
	public:
		WrongAnimal(void);

		WrongAnimal(const WrongAnimal& other);
		WrongAnimal &operator=(const WrongAnimal &other);

		virtual ~WrongAnimal(void);

		const std::string& getType(void) const;
		
		void setType (std::string animalType);

		void makeSound(void) const;
};

#endif

