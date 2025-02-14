/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:18:38 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 15:33:51 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

#define ARRAY_SIZE 6

int main()
{
	std::cout << "\n==== Basic Polymorphism Tests (with pointers) ====" << std::endl;

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete(i);
	delete(j);

	std::cout << "\n==== Copy constructor Tests ====" << std::endl;

	Cat cat;
	Cat copy_cat(cat);

	std::cout << "Original cat type: " << cat.getType() << std::endl;
	std::cout << "Copied cat type: " << copy_cat.getType() << std::endl;
	cat.makeSound();
	copy_cat.makeSound();

	std::cout << "\n==== Copy assignment Tests ====" << std::endl;

	Cat cat1;
	Cat cat2;

	std::cout << "Before assignment:" << std::endl;
	std::cout << "cat type: " << cat.getType() << std::endl;
	std::cout << "cat2 type: " << cat2.getType() << std::endl;
	cat.makeSound();
	cat2.makeSound();

	cat2 = cat1;

	std::cout << "After assignment:" << std::endl;
	std::cout << "cat type: " << cat.getType() << std::endl;
	std::cout << "cat2 type: " << cat2.getType() << std::endl;
	cat.makeSound();
	cat2.makeSound();

	std::cout << "\n==== Basic Leak Tests ====" << std::endl;

	const AAnimal* l = new Dog();
	const AAnimal* m = new Cat();
	delete l;
	delete m;

	std::cout << "\n==== Array Leak Tests ====" << std::endl;

	AAnimal	*AAnimals[ARRAY_SIZE];

	for(int a = 0; a < ARRAY_SIZE/2; a++)
		AAnimals[a] = new Dog();
	for(int a = ARRAY_SIZE/2; a < ARRAY_SIZE; a++)
		AAnimals[a] = new Cat();

	for(int a = 0; a < ARRAY_SIZE; a++)
		delete AAnimals[a];

	std::cout << "\n==== Deep copy Tests ====" << std::endl;

	Dog *dog1 = new Dog();
	Dog dog3;
	Dog dog2(*dog1);

	dog1->getBrain()->setIdea(0, "Implanted idea");
	dog3 = *dog1;
	std::cout << "dog1 idea: " << dog1->getBrain()->getIdea(0) << std::endl;
	std::cout << "dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;
	std::cout << "dog3 idea: " << dog3.getBrain()->getIdea(0) << std::endl;
	delete (dog1);
	std::cout << "dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;
	std::cout << "dog3 idea: " << dog3.getBrain()->getIdea(0) << std::endl;

	return 0;
}