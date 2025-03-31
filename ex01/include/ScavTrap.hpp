/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 16:09:22 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/31 11:32:37 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <ClapTrap.hpp>

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& old);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& S);

		void	attack(const std::string& target);
		void	guardGate();
};