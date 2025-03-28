/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 17:19:21 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/28 15:43:26 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << this->_name << " constructor called\n";
	_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
};

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " destructor called\n";
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
	std::cout << this->_name << "is kindly but firmly asking for a HIGH FIVE!\n";
}
