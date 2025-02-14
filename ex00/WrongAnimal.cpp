/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:16:30 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 11:11:05 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: type("unclassified")
{
	std::cout << "Default constructor for Wrong Animal called." << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
	: type(other.type)
{
	std::cout << "Copy constructor for Wrong Animal called." << std::endl;
}
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Copy assignment operator for Wrong Animal called." << std::endl;
	if(this != &other)
		this->type = other.type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for Wrong Animal called." << std::endl;
}


void	WrongAnimal::makeSound() const
{
	std::cout << "Grrrr....?" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return(type);
}
