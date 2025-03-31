/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 11:47:23 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 17:24:44 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called\n";
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called\n";
}

WrongCat::WrongCat(const WrongCat& old) : WrongAnimal(old) {};

WrongCat&	WrongCat::operator=(const WrongCat& C)
{
	if (this != &C)
	{
		WrongAnimal::operator=(C);
	}
	return (*this);
}

std::string		WrongCat::getType( void ) const
{
	return (_type);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong cat mjjjuuu\n";
}