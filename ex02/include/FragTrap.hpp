/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 16:55:53 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/28 15:43:01 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	FragTrap(std::string name);
	FragTrap(const FragTrap& old);
	FragTrap& operator=(const FragTrap& C);
	~FragTrap();

	void	highFiveGuys();	
};