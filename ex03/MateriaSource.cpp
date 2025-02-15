/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 09:44:58 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/15 11:57:45 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		known[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for(int i = 0; i < 4; i++)
	{
		if (other.known[i] == NULL)
			this->known[i] = NULL;
		else
			this->known[i] = other.known[i]->clone();
	}

}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for(int i = 0; i < 4; i++)
		{
			delete (this->known[i]);
			if (other.known[i] == NULL)
				this->known[i] = NULL;
			else
				this->known[i] = other.known[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
		delete (known[i]);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if (known[i] == NULL)
		{
			known[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < 4; i++)
	{
		if (known[i] && (known[i]->getType()).compare(type) == 0)
			return (known[i]->clone());
	}
	return (0);
}