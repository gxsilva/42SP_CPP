/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:21:39 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/30 02:58:25 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public AAnimal
{
	private:
		Brain*	_catBrain;
		
	public:
		Cat(void);

		Cat(const Cat& other);
		Cat &operator=(const Cat &other);

		~Cat();

		void makeSound(void) const;
};

#endif

