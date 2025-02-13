/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:16:30 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/13 19:19:26 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: type("unclassified")
{
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if(this != &other)
		this->type = other.type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Grrrr....?" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return(type);
}
