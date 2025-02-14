/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:18:38 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 12:45:05 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

#define ARRAY_SIZE 6

int main()
{
	std::cout << "\n==== Basic Leak Tests ====" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << "\n==== Array Leak Tests ====" << std::endl;

	Animal	*animals[ARRAY_SIZE];

	for(int a = 0; a < ARRAY_SIZE/2; a++)
		animals[a] = new Dog();
	for(int a = ARRAY_SIZE/2; a < ARRAY_SIZE; a++)
		animals[a] = new Cat();

	for(int a = 0; a < ARRAY_SIZE; a++)
		delete animals[a];

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