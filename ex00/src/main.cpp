/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 15:00:00 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/10 16:06:45 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap boy("boy");
	boy.attack("fakeTarget");
	boy.takeDamage(10);
	boy.attack("fakeTarget");
	boy.beRepaired(2);
	boy.attack("fakeTarget");

	boy.attack("fakeTarget");
	boy.attack("fakeTarget");
	boy.attack("fakeTarget");
	boy.attack("fakeTarget");
	boy.attack("fakeTarget");
	boy.attack("fakeTarget");
	boy.attack("fakeTarget");

	boy.attack("fakeTarget");

}