/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:27:01 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 11:54:50 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal()
{
	std::cout << "Default constructor for Dog called." << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &other)
	: Animal(other)
{
	std::cout << "Copy constructor for Dog called." << std::endl;
}

Dog		&Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment operator for Dog called." << std::endl;
	if(this != &other)
		Animal::operator=(other);
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog called." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}