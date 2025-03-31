/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 11:35:02 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 17:24:19 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << std::endl;
	std::cout << "type: " << dog->getType() << " - makes sound: ";
	dog->makeSound();
	std::cout << "type: " << cat->getType() << " - makes sound: ";
	cat->makeSound();
	
	std::cout << std::endl;
	std::cout << "type: " << meta->getType() << " - makes sound: ";
	meta->makeSound();
	std::cout << std::endl;


	const WrongAnimal* otherAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << std::endl;
	std::cout << "type: " << wrongCat->getType() << " - makes sound: ";
	wrongCat->makeSound();

	otherAnimal->makeSound();

	std::cout << std::endl;
	delete meta;
	delete dog;
	delete cat;
	std::cout << std::endl;
	delete otherAnimal;
	delete wrongCat;

	return 0;
}
