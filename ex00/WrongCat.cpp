/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:27:01 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/13 19:10:50 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal()
{
	type = "WrongCat";
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}