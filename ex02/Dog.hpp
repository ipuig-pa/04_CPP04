/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:09:53 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 15:27:24 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal{

public:
	Dog();
	Dog(const Dog &other);
	Dog		&operator=(const Dog &other);
	virtual ~Dog();

	void	makeSound() const;
	Brain	*getBrain() const;

private:
	Brain	*brain;

};

#endif