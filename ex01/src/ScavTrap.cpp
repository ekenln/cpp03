/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 16:09:25 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/10 17:21:11 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap " << this->_name << " constructor called\n";
};

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " destructor called\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints && this->_hitPoints)
	{
		std::cout << "ScavTrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage << " points of damage!\n\n";
		this->_energyPoints--;
	}
	else
	{
		std::cout << "Tried to attack but i have no energy or hit points\n\n";
	}
}

void	ScavTrap::guardGate()
{
	std::cout << this->_name << " is in gate keeper mode\n";
}
//