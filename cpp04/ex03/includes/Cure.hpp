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
#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "../headers.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);

		Cure(const Cure& other);
		Cure &operator=(const Cure &other);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

		virtual ~Cure();
};

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;	
}


#endif

