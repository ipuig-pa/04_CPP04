/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:22:24 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 15:38:54 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor for Brain called." << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Copy constructor for Brain called." << std::endl;
	*this = other;
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Copy assignment operator for Brain called." << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor for Brain called." << std::endl;
}

std::string	Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}

void	Brain::setIdea(int i, const std::string &idea)
{
	this->ideas[i] = idea;
}
