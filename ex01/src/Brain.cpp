/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 12:21:42 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 15:58:12 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
}
Brain::~Brain()
{
	std::cout << "Brain default destructor called\n";
}

// Brain::Brain(const Brain& old) {

// }

Brain&	Brain::operator=(const Brain& B)
{
	if (this != &B)
	{

	}
	return (*this);
}

void	Brain::setIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
}

std::string	Brain::getIdea( void ) const
{
	return (_ideas[0]);
}

