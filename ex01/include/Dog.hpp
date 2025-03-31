/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 11:20:43 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 15:59:23 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		~Dog();
		Dog(const Dog& old);
		Dog&	operator=(const Dog& A);
		void	setBrain(std::string idea);
		void	getBrain( void ) const;

		void	makeSound( void ) const;
};