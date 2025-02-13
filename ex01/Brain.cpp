/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:22:24 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/13 19:32:11 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain(Brain &other)
{
	*this = other;
}

Brain	&operator=(Brain &other) const
{
	if (this != &other)
		this->ideas = other.ideas;
	return (*this);
}

~Brain()
{
}