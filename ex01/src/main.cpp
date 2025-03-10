/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: elleneklund <elleneklund@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 15:00:00 by elleneklund   #+#    #+#                 */
/*   Updated: 2025/03/10 17:11:00 by elleneklund   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int	main(void)
{
	ClapTrap boy("boy");
	ScavTrap derivedBoy("derived boy");
	boy.attack("fakie");
	derivedBoy.attack("new fake target");
}