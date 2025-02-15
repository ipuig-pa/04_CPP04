/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:50:58 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/15 11:14:30 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria{

public:
	Cure();
	Cure(const Cure &other);
	Cure	&operator=(const Cure &other);
	virtual ~Cure();

	virtual AMateria*	clone() const;
	virtual void	use(ICharacter& target);

};

#endif