/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 15:14:04 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/20 17:12:07 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :  _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Constructor called\n\n";
};

ClapTrap::ClapTrap(const ClapTrap& old) : _name(old._name), _hitPoints(old._hitPoints), _energyPoints(old._energyPoints), _attackDamage(old._attackDamage) {};

ClapTrap& ClapTrap::operator=(const ClapTrap& C) 
{
	if (this != &C)
	{
		this->_name = C._name;
		this->_hitPoints = C._hitPoints;
		this->_energyPoints = C._energyPoints;
		this->_attackDamage= C._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
		std::cout << "Clap Trap " << this->_name << " tried to attack but has no energy\n\n";
	else if (this->_hitPoints <= 0)
		std::cout << "Clap Trap " << this->_name << " tried to attack but has no hit points\n\n";
	else
	{
		std::cout << "Clap Trap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << "Clap Trap " << this->_name << " got attacked and lost " << amount << " hit points\n";
	std::cout << "health: " << this->_hitPoints << "\n\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << this->_name << " is successfully repaired\n";
		std::cout << "current stats for " << this->_name;
		std::cout << ":\nEnergy: " << this->_energyPoints << ", health: " << this->_hitPoints;
		std::cout << "\n\n";
	}
	else
	{
		std::cout << "No energy to repair, dead forever\n\n";
	}
}