/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 17:19:21 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/10 18:09:37 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap " << this->_name << " constructor called\n";
};

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " destructor called\n";
}

// void	FragTrap::attack(const std::string& target)
// {
// 	if (this->_energyPoints && this->_hitPoints)
// 	{
// 		std::cout << "FragTrap " << this->_name << " attacks ";
// 		std::cout << target << ", causing " << this->_attackDamage << " points of damage!\n\n";
// 		this->_energyPoints--;
// 	}
// 	else
// 	{
// 		std::cout << "Tried to attack but i have no energy or hit points\n\n";
// 	}
// }

void	FragTrap::highFiveGuys()
{
	std::cout << this->_name << "is kindly but firmly asking for a HIGH FIVE!\n";
}
//