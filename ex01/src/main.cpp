/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/31 11:35:02 by eeklund       #+#    #+#                 */
/*   Updated: 2025/03/31 16:09:01 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Animal	**createAnimalArray( int n )
{
	int	half = n/2;
	Animal	**animalArray = new Animal*[n];
	for (int i = 0; i < half; i++)
	{
		animalArray[i] = new Dog();
	}
	for (int i = half; i < n; i++)
	{
		animalArray[i] = new Cat();
	}
	return (animalArray);
}

int main()
{
	int n = 2;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Dog dog1;

	std::cout << std::endl;

	// Dog dog2 = dog1;
	Dog dog2(dog1);
	// dog2.setBrain("im a deep copy dog");
	std::cout << "dog 1 idea: ";
	dog1.getBrain();
	std::cout << "dog 2 idea: ";
	dog2.getBrain();
	std::cout << std::endl;
	Animal **animalArray = createAnimalArray(n);
	for (int i = 0; i < n; i++)
	{
		animalArray[i]->makeSound();
	}
	std::cout << std::endl;

	for (int i = 0; i < n; i++)
	{
		delete animalArray[i];
	}
	std::cout << std::endl;
	delete[] animalArray;
	
	delete j;
	delete i;
	return 0;
}
