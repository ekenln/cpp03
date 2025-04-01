/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 15:14:04 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/01 16:58:30 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	std::cout << "\033[1;35mClapTrap\033[0m default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	std::cout << "\033[1;35mClapTrap\033[0m Constructor called\n\n";
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
	std::cout << "\033[1;35mClapTrap\033[0m " << this->_name << " destructor called\n";
}

std::string	ClapTrap::getName()
{
	return (_name);
}


void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints && this->_hitPoints)
	{
		std::cout << "\033[1;35mClapTrap\033[0m " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints--;
	}
	else
	{
		std::cout << "\033[1;35mClapTrap\033[0m " << this->_name;
		std::cout << "tried to attack but has no energy or hit points\n\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << "\033[1;35mClapTrap\033[0m " << this->_name;
	std::cout << " got attacked and lost " << amount << " hit points\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "\033[1;35mClapTrap\033[0m " << this->_name;
		std::cout << " is successfully repaired\n\n";
	}
	else
	{
		std::cout << "\033[1;35mClapTrap\033[0m " << this->_name;
		std::cout << " has no energy to repair, dead forever\n\n";
	}
}