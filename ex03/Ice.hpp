/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:50:40 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/15 11:14:44 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria{

public:
	Ice();
	Ice(const Ice &other);
	Ice	&operator=(const Ice &other);
	virtual~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

};

#endif