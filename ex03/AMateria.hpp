/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:46:04 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 16:42:55 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMTERIA_HPP
# include <iostream>

class AMateria{

protected:
	std::string	type;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &other);
	AMateria *operator=(const AMateria &other);
	virtual ~AMateria();
	std::string const &getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};

#endif;