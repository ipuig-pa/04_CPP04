/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:50:32 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 17:12:12 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice()
	: AMateria()
{
	type = "ice";
}

Ice::Ice(const Ice &other)
	AMateria(other), type(other.type)
{
}

Ice *Ice::operator=(const Ice &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Ice::~Ice()
{
}

AMateria*	Ice::clone() const
{
	AMateria *new = new Ice();
	reutrn(new);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}