/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 17:19:21 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/01 16:56:52 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "\033[1;34mFragTrap\033[0m " << this->_name << " default constructor called\n";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "\033[1;34mFragTrap\033[0m " << this->_name << " constructor called\n";
	_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
};

FragTrap::~FragTrap() {
	std::cout << "\033[1;34mFragTrap\033[0m " << this->_name << " destructor called\n";
}

FragTrap::FragTrap(const FragTrap& old) : ClapTrap(old) {};

FragTrap& FragTrap::operator=(const FragTrap& C)
{
	if (this != &C)
	{
		ClapTrap::operator=(C);
	}
	return (*this);
}

void	FragTrap::highFiveGuys()
{
	std::cout << "\033[1;34mFragTrap\033[0m " <<  this->_name << " is kindly but firmly asking for a HIGH FIVE!\n\n";
}
