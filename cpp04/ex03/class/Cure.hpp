/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:54:38 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 23:54:38 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "./AMateria.hpp"
# include "./ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const std::string _ignore);

		Cure(const Cure& other);
		Cure &operator=(const Cure &other);

		AMateria* clone() const;
		void use(ICharacter& target);

		~Cure(void);
};

#endif //CURE_HPP

