/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 11:39:55 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 17:23:00 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("noType")
{
	std::cout << "WrongAnimal default constructor called\n";
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called\n";
}
WrongAnimal::WrongAnimal(const WrongAnimal& old) : _type(old._type) {};

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& A)
{
	if (this != &A)
	{
		this->_type = A._type;
	}
	return (*this);
}

std::string		WrongAnimal::getType( void ) const
{
	return (_type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "woffmjuaooshhh ...WRONG ANIMAL\n";
}