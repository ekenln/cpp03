/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 16:09:25 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/31 16:56:57 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << this->_name << " constructor called\n";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
};

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " destructor called\n";
}

//Inheritance creates a relationship where a ScavTrap "is-a" ClapTrap
//This is the foundation of polymorphism — derived class objects can be used wherever base class objects are expected.

ScavTrap::ScavTrap(const ScavTrap& old) : ClapTrap(old) {}

ScavTrap& ScavTrap::operator=(const ScavTrap& S) 
{
	if (this != &S)
	{
		ClapTrap::operator=(S);
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " tried to attack but has no energy\n\n";
	else if (this->_hitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " tried to attack but has no hit points\n\n";
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << this->_name << " is in gate keeper mode\n";
}
