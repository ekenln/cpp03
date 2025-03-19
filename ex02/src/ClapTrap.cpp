/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 15:14:04 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/19 13:58:32 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	std::cout << "default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	std::cout << "Constructor called\n\n";
};

ClapTrap::ClapTrap(std::string name, int hit, int energy, int attack) : _name(name), _hitPoints(hit), _energyPoints(energy), _attackDamage(attack) {
	std::cout << "clapTrap " << name << " constructor called\n";
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
	std::cout << "claptrap " << this->_name << " destructor called\n";
}

std::string	ClapTrap::getName()
{
	return (_name);
}


void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints && this->_hitPoints)
	{
		std::cout << "Clap Trap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage << " points of damage!\n\n";
		this->_energyPoints--;
	}
	else
	{
		std::cout << "Tried to attack but i have no energy or hit points\n\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << this->_name << " got attacked and lost " << amount << " hit points\n\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "Successfully repaired\n\n";
	}
	else
	{
		std::cout << "No energy to repair, dead forever\n\n";
	}
}