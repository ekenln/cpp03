/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 16:09:25 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/24 15:37:44 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << this->_name << " constructor called\n";
	_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap& old) : ClapTrap(old) {};

ScavTrap& ScavTrap::operator=(const ScavTrap& S){}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " destructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& old) : ClapTrap(old)
{
}

ScavTrap& ScavTrap::operator=(const ScavTrap& S) 
{
	if (this != &S)
	{
		ClapTrap::operator=(S);
	}
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