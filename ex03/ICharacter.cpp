/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:21:08 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 17:38:26 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	for(int i = 0, i < 4, i++)
		slot[i] = NULL;
}

ICharacter::ICharacter(const std::string &name)
	: name(name);
{
	for(int i = 0, i < 4, i++)
		slot[i] = NULL;
}

ICharacter::ICharacter( const ICharacter &other)
{
	for(int i = 0, i < 4, i++)
	{
		if (other.slot[i] = NULL)
			this->slot[i] == NULL;
		else
			this->slot[i] = slot[i].clone();
	}
}

ICharacter::ICharacter	*operator=( const ICharacter &other)
{
	if (this != &other)
	{
		for(int i = 0, i < 4, i++)
		{
			delete (this->slot[i]);
			if (other.slot[i] = NULL)
				this->slot[i] == NULL;
			else
				this->slot[i] = slot[i].clone();
		}
	}
	return (*this);
}




ICharacter::~ICharacter()
{
	for(int i = 0, i < 4, i++)
	{
		if (other.slot[i] != NULL)
			delete (this->slot[i]);
	}
}

std::string const &ICharacter::getName() const
{
	return (name);
}

void ICharacter::equip(AMateria* m)
{
	for(int i = 0, i < 4, i++)
	{
		if (slot[i] = NULL)
		{
			slot[i] = m;
			break;
		}
	}
}

void ICharacter::unequip(int idx)
{
	slot[idx] = NULL;
}

void ICharacter::use(int idx, ICharacter& target)
{
	slot[idx]->use(target);
}
