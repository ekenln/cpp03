/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 16:09:25 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/10 17:00:45 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap " << this->getName() << " constructor called\n";
};

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " destructor called\n";
}


void	ScavTrap::guardGate()
{
	std::cout << this->getName() << " is in gate keeper mode\n";
}
