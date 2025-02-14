/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:50:58 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 16:53:31 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include <iostream>

class Cure{

public:
	Cure();
	Cure(const Cure &other);
	Cure	*operator=(const Cure &other);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);

};

#endif