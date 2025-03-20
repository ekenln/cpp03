/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eeklund <eeklund@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 15:00:00 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/20 16:59:37 by eeklund       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap hej; //chaeck for default constructor 
	ClapTrap boy("boy");
	boy.attack("fakeTarget");
	boy.takeDamage(11);
	boy.attack("fakeTarget");
	boy.beRepaired(2);
	boy.attack("fakeTarget");

	for (int i = 0; i < 8; i++)
		boy.attack("fakeTarget");
	// boy.attack("fakeTarget");
	// boy.attack("fakeTarget");
	// boy.attack("fakeTarget");
	// boy.attack("fakeTarget");
	// boy.attack("fakeTarget");
	// boy.attack("fakeTarget");

	// boy.attack("fakeTarget");

}