/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 01:00:39 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/30 02:48:37 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string		ideas[100];
		
	public:
		Brain(void);

		Brain(const Brain& other);
		Brain &operator=(const Brain &other);

		~Brain();
		
		const std::string&	getIdeas(int pst) const;
};

#endif

