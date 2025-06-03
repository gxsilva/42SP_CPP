/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:54:38 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 23:54:38 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "./AMateria.hpp"
# include "./ICharacter.hpp"

class AMateria;

class Ice : public AMateria
{
	public:
		Ice (void);

		Ice (const Ice& ice);
		Ice& operator=(const Ice& ice);

		AMateria* clone() const;
		void use(ICharacter& target);

		~Ice (void);
};

#endif

