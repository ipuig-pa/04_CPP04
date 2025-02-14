/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:16:30 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 11:10:41 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	: type("unclassified")
{
	std::cout << "Default constructor for Animal called." << std::endl;
}
Animal::Animal(const Animal &other)
	: type (other.type)
{
	std::cout << "Copy constructor for Animal called." << std::endl;
}
Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "Copy assignment operator for Animal called." << std::endl;
	if(this != &other)
		this->type = other.type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "Destructor for Animal called." << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Grrrr....?" << std::endl;
}

std::string	Animal::getType() const
{
	return(type);
}
