/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:10:44 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 09:34:19 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{

public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat	&operator=(const WrongCat &other);
	~WrongCat();

	void	makeSound() const;


};

#endif