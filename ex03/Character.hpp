/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:54:56 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 17:25:32 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter{

private:
	std::string		name;
	AMateria		*inventory[4];
	static AMateria	*floor[100];
	static int		floor_count;

public:

	Character();
	Character(const std::string &name);
	Character( const Character &other);
	Character					&operator=( const Character &other);
	virtual ~Character();

	virtual std::string const	&getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
	static void					cleanFloor(void);

};

#endif