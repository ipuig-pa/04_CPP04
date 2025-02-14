/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:10:44 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 15:26:31 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal{

public:
	Cat();
	Cat(const Cat &other);
	Cat		&operator=(const Cat &other);
	virtual ~Cat();

	void	makeSound() const;
	Brain	*getBrain() const;

private:
	Brain	*brain;

};

#endif