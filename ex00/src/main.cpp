/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 15:00:00 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/04/01 16:17:46 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap checkDefault;
	ClapTrap boy("boy");
	boy.attack("fakeTarget");
	boy.takeDamage(11);
	boy.attack("fakeTarget");
	boy.beRepaired(2);
	boy.attack("fakeTarget");

	for (int i = 0; i < 8; i++)
		boy.attack("fakeTarget");

	return 0;
}
