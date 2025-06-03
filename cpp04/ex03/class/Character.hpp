/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:54:38 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 23:54:38 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "./ICharacter.hpp"
# include "./AMateria.hpp"

class Character : public ICharacter
{
	protected:
		std::string		_name;

		AMateria*	materials[4];

		// static const AMateria*	unequipMaterials[999];

	public:
		Character(void);
		Character(const std::string name);

		Character(const Character& other);
		Character &operator=(const Character &other);

		~Character();

		/* Inheritance */
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		/* getters */
		AMateria*	getMaterial (int pst) { return (this->materials[pst]); }
		
		/* setter */
		void		setMaterial (AMateria* materia, int pst) { this->materials[pst] = materia; }

};

#endif