/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:05:57 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/13 19:15:28 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal{

public:
	Animal();
	Animal(const Animal &other);
	Animal				&operator=(const Animal &other);
	virtual ~Animal();

	virtual void		makeSound() const;
	std::string			getType() const;

protected:
	std::string			type;

};

#endif