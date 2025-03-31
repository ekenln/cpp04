/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 11:21:03 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 16:08:58 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "DOG default constructor called\n";
	_brain = new Brain();
	_brain->setIdea("I am a dog woof");
	_type = "Dog";
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "DOG default destructor called\n";
}
Dog::Dog(const Dog& old) : Animal(old) {
	this->_brain = new Brain();
	_brain->setIdea("I am a copied dog");
};

Dog&	Dog::operator=(const Dog& D)
{
	if (this != &D)
	{
		Animal::operator=(D);
	}
	return (*this);
}

void	Dog::setBrain(std::string idea)
{
	_brain->setIdea(idea);	
}

void	Dog::getBrain( void ) const
{
	std::cout << _brain->getIdea() << "\n";
}

void	Dog::makeSound( void ) const
{
	std::cout << "DOG is barking\n";
}