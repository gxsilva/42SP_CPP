/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:54:38 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/03 20:05:36 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "./ICharacter.hpp"

class AMateria
{
	protected:
		std::string		_type;

	public:
	AMateria(std::string const &type);
	
	AMateria(const AMateria& amateria);
	AMateria& operator=(const AMateria& amateria);

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	
	std::string const & getType() const;

	virtual ~AMateria();
};

#endif

