/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:50:40 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 16:52:55 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include <iostream>

class Ice{

public:
	Ice();
	Ice(const Ice &other);
	Ice	*operator=(const Ice &other);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);

};

#endif