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
# include "../includes/headers.hpp"

class Character : public ICharacter
{
	private:
		std::string		_name;

	public:
		Character(void);
		Character(const std::string name);

		Character(const Character& other);
		Character &operator=(const Character &other);

		~Character();

		/* Inheritance */
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif