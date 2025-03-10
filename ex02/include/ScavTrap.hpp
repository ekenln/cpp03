/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 16:09:22 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/10 17:01:01 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <ClapTrap.hpp>

class ScavTrap : ClapTrap
{
	public:

		ScavTrap(std::string name);
		~ScavTrap();

		void	guardGate();
};