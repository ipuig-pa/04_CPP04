/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:18:38 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 11:58:07 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << "\n==== Basic Polymorphism Tests (with pointers) ====" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete(meta);
	delete(i);
	delete(j);

	std::cout << "\n==== Non Polymorphism Tests (Wrong Animal) ====" << std::endl;

	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_i = new WrongCat();

	std::cout << w_i->getType() << " " << std::endl;
	w_i->makeSound(); //will output the WrongAnimal sound!
	w_meta->makeSound();
	delete(w_meta);
	delete(w_i);

	std::cout << "\n==== Stack Allocation Tests ====" << std::endl;

	Dog	stack_dog;

	stack_dog.makeSound();

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
	
	return 0;
}