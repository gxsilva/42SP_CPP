/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:47:58 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/02 20:49:47 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		const AMateria* _templates[4];
		
	public:
		MateriaSource (void);

		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);
		
		virtual ~MateriaSource();
		
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
};

#endif // MATERIASOURCE_HPP

