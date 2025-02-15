/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:21:08 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 17:38:26 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria* Character::floor[100];
int Character::floor_count;

Character::Character()
	: name("")
{
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const std::string &name)
	: name(name)
{
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character( const Character &other)
	: name(other.name)
{
	for(int i = 0; i < 4; i++)
	{
		if (other.inventory[i] == NULL)
			this->inventory[i] = NULL;
		else
			this->inventory[i] = other.inventory[i]->clone();
	}
}

Character	&Character::operator=( const Character &other)
{
	if (this != &other)
	{
		this->name = other.name;
		for(int i = 0; i < 4; i++)
		{
			delete (this->inventory[i]);
			if (other.inventory[i] == NULL)
				this->inventory[i] = NULL;
			else
				this->inventory[i] = other.inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete (this->inventory[i]);
}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (floor_count < 100)
			floor[floor_count++] = this->inventory[idx];
		this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
	{
		inventory[idx]->use(target);
		delete (inventory[idx]);
		inventory[idx] = NULL;
	}
}

void Character::cleanFloor(void)
{
	for(int i = 0; i < floor_count; i++)
		delete (floor[i]);
}