/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 11:00:44 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 16:16:51 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
	
		std::string	_type;
	
	public:

		Animal();
		virtual ~Animal();
		Animal(const Animal& old);
		Animal&	operator=(const Animal& A);

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const = 0;
};
