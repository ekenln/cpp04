/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 13:33:42 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 15:57:55 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain
{
	private:

		std::string	_ideas[100];
		
	public:
		Brain();
		~Brain();
		// Brain(const Brain& old);
		void		setIdea(std::string idea);
		std::string	getIdea( void ) const;

		Brain&	operator=(const Brain& B);
};