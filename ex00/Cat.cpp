/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:27:01 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 09:38:53 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal()
{
	std::cout << "Default constructor for Cat called." << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &other)
	: Animal(other)
{
	std::cout << "Copy constructor for Cat called." << std::endl;
}

Cat		&Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment operator for Cat called." << std::endl;
	if(this != &other)
		this->type = other.type;
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Destructor for Cat called." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}