/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:05:57 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/13 19:15:28 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal{

public:
	AAnimal();
	AAnimal(const AAnimal &other);
	AAnimal			&operator=(const AAnimal &other);
	virtual ~AAnimal();

	virtual void	makeSound() const = 0;
	std::string		getType() const;

protected:
	std::string		type;

};

#endif