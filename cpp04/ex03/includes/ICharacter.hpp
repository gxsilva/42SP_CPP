/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:54:38 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 23:54:38 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "../headers.hpp"

class ICharacter
{
	private:
		std::string		_name;

	public:
		ICharacter(void);

		ICharacter(const ICharacter& other);
		ICharacter &operator=(const ICharacter &other);

		~ICharacter();

		const std::string& getName (void) const;
};

#endif

