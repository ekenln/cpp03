/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 16:55:53 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/01 16:45:53 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& old);
		FragTrap& operator=(const FragTrap& C);
		~FragTrap();

		void	highFiveGuys();	
};