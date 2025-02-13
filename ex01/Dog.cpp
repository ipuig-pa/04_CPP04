/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:27:01 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/13 19:29:01 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal()
{
	type = "Dog";
	brain = new	Brain();
}

Dog::~Dog()
{
	delete (brain);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}