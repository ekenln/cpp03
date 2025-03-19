/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 15:09:06 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/19 13:57:20 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class ClapTrap
{
	private:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& old);
		ClapTrap(std::string name, int hit, int energy, int attack);
		ClapTrap& operator=(const ClapTrap& C);
		~ClapTrap();

		std::string	getName();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};