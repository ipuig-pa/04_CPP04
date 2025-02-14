/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:22:27 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/02/14 15:38:59 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain{

public:
	Brain();
	Brain(const Brain &other);
	Brain	&operator=(const Brain &other);
	~Brain();

	std::string	getIdea(int i) const;
	void		setIdea(int i, const std::string &idea);

private:
	std::string	ideas[100];

};

#endif