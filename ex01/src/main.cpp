/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 15:00:00 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/01 16:31:39 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main(void)
{
	std::cout << "\n--- Testing ClapTrap ---\n";
	ClapTrap boy("boy");

	boy.attack("fakie");
	boy.takeDamage(5);
	boy.takeDamage(6);

	boy.beRepaired(5);
	boy.beRepaired(10);
	
    for (int i = 0; i < 8; i++)
	{
        boy.attack("randomEnemy");
	}

	boy.beRepaired(5);

	std::cout << "\n--- Testing ScavTrap ---\n";
	ScavTrap derivedBoy("derived boy");
	
	derivedBoy.attack("new fake target");
	derivedBoy.guardGate();

	derivedBoy.takeDamage(50);
	derivedBoy.takeDamage(60);

	derivedBoy.beRepaired(20);


	ScavTrap copyBoy(derivedBoy);
	copyBoy.attack("Copy's Enemy");

	derivedBoy.attack("Final Enemy");

	return 0;
}