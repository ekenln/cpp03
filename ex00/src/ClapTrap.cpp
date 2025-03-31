/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 15:14:04 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/31 16:45:19 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :  _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Constructor called\n\n";
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
	std::cout << "ClapTrap destructor called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " tried to attack but has no energy\n\n";
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " tried to attack but has no hit points\n\n";
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << "\033[1;31mClapTrap " << this->_name << " got attacked and lost " << amount << " hit points\033[0m\n";
	std::cout << "Health: " << this->_hitPoints << "\n\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "\033[1;32m" << this->_name << " is successfully repaired\033[0m\n";
		std::cout << "current stats for " << this->_name;
		std::cout << ":\nEnergy: " << this->_energyPoints << ", Health: " << this->_hitPoints;
		std::cout << "\n\n";
	}
	else
	{
		std::cout << "\033[1;31mNo energy to repair, dead forever\033[0m\n\n";
	}
}