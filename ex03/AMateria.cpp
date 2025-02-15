/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:46:19 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/15 12:11:44 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
	: type(type)
{
}

AMateria::AMateria(const AMateria &other)
{
	this->type = other.type;
}
AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AMateria::~AMateria()
{
}
std::string const &AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}