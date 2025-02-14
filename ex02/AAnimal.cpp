/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:16:30 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 11:10:41 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
	: type("unclassified")
{
	std::cout << "Default constructor for AAnimal called." << std::endl;
}
AAnimal::AAnimal(const AAnimal &other)
	: type (other.type)
{
	std::cout << "Copy constructor for AAnimal called." << std::endl;
}
AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	std::cout << "Copy assignment operator for AAnimal called." << std::endl;
	if(this != &other)
		this->type = other.type;
	return(*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor for AAnimal called." << std::endl;
}

std::string	AAnimal::getType() const
{
	return(type);
}
