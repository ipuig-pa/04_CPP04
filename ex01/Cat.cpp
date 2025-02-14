/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:27:01 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 12:46:28 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal()
{
	std::cout << "Default constructor for Cat called." << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &other)
	: Animal(other)
{
	std::cout << "Copy constructor for Cat called." << std::endl;
	brain = new Brain(*other.brain);
}

Cat		&Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment operator for Cat called." << std::endl;
	if(this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Destructor for Cat called." << std::endl;
	delete(brain);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (this->brain);
}
