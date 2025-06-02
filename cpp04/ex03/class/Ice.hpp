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
# include "../includes/headers.hpp"

class Ice : public AMateria
{
	public:
		Ice (void);

		Ice (const Ice& ice);
		Ice& operator=(const Ice& ice);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif

