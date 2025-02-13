/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:16:30 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/13 19:16:47 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	: type("unclassified")
{
}
Animal::Animal(const Animal &other)
{
	*this = other;
}
Animal	&Animal::operator=(const Animal &other)
{
	if(this != &other)
		this->type = other.type;
	return(*this);
}

Animal::~Animal()
{
}

void	Animal::makeSound() const
{
	std::cout << "Grrrr....?" << std::endl;
}

std::string	Animal::getType() const
{
	return(type);
}
