/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:50:51 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 17:05:47 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure()
	: AMateria()
{
	type = "cure";
}

Cure::Cure(const Cure &other)
	AMateria(other), type(other.type)
{
}

Cure *Cure::operator=(const Cure &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Cure::~Cure()
{
}

AMateria*	Cure::clone() const
{
	AMateria *new = new Cure();
	reutrn(new);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
