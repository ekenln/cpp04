/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 11:12:19 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 12:17:07 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


//To sum up, always make base classes' 
//destructors virtual when they're meant to be manipulated polymorphically.

Cat::Cat() : Animal()
{
	std::cout << "CAT default constructor called\n";
	_type = "Cat";
}

// Cat::Cat(std::string type);
Cat::~Cat()
{
	// delete this;
	std::cout << "CAT default destructor called\n";
}
Cat::Cat(const Cat& old) : Animal(old) {};

Cat&	Cat::operator=(const Cat& C)
{
	if (this != &C)
	{
		Animal::operator=(C);
	}
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "CAT is mjauuing\n";
}