/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 11:04:15 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 16:15:58 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called\n";
}

Animal::~Animal()
{
	std::cout << "default destructor for Animal called\n";
}

Animal::Animal(const Animal& old) : _type(old._type)
{
	std::cout << "copy constructor for animal called\n"; 
}

Animal&	Animal::operator=(const Animal& A)
{
	if (this != &A)
	{
		this->_type = A._type;
	}
	return (*this);
}


std::string	Animal::getType( void ) const
{
	return (_type);
}

// void	Animal::makeSound( void) const
// {
// 	std::cout << "Generic animal sound\n";
// }