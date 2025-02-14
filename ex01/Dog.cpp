/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:27:01 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 12:46:55 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal()
{
	std::cout << "Default constructor for Dog called." << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &other)
	: Animal(other)
{
	std::cout << "Copy constructor for Dog called." << std::endl;
	brain = new Brain(*other.brain);
}

Dog		&Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment operator for Dog called." << std::endl;
	if(this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog called." << std::endl;
	delete(brain);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return (this->brain);
}
