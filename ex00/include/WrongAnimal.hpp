/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 11:39:41 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 17:28:59 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
	
		std::string	_type;
	
	public:

		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& old);
		WrongAnimal&	operator=(const WrongAnimal& A);

		std::string		getType( void ) const;
		void			makeSound( void ) const;
};
