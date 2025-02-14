/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:46:19 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 16:58:17 by ipuig-pa         ###   ########.fr       */
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

AMateira::AMateria(const AMateria &other)
{
}
AMateria *AMateria::operator=(const AMateria &other)
{
	return (*this);
}

AMateria::~AMateria()
{
}
std::string const &AMateria::getType() const
{
	return (type);
}

void use(ICharacter& target)
{
}