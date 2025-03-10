/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 16:55:53 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/10 17:23:02 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : ClapTrap
{
	FragTrap(std::string name);
	~FragTrap();

	void	highFiveGuys();	
};