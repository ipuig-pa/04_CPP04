/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:27:01 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 10:21:41 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal()
{
	std::cout << "Default constructor for Wrong Cat called." << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
	: WrongAnimal(other)
{
	std::cout << "Copy constructor for Wrong Cat called." << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Copy assignment operator for Wrong Cat called." << std::endl;
	if(this != &other)
		this->type = other.type;
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor for Wrong Cat called." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
