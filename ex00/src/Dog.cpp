/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 11:21:03 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 12:17:11 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "DOG default constructor called\n";
	_type = "Dog";
}

Dog::~Dog()
{
	// delete this;
	std::cout << "DOG default destructor called\n";
}
Dog::Dog(const Dog& old) : Animal(old) {};

Dog&	Dog::operator=(const Dog& D)
{
	if (this != &D)
	{
		Animal::operator=(D);
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "DOG is barking\n";
}