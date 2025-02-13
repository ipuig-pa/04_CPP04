/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:05:57 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/13 18:59:57 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal{

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal	&operator=(const WrongAnimal &other);
	~WrongAnimal();

	std::string	getType() const;
	void	makeSound() const;

protected:
	std::string	type;

};

#endif