/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 09:55:25 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/24 19:31:44 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap():ClapTrap("ScavTrap", 100, 50, 20)
{
	std::cout <<"ScavTrap default constructor called\n";
}
ScavTrap::ScavTrap(const std::string &name)
	:ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap alternative constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &other)
	: ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assignment operator called\n";
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}


void ScavTrap::attack(const std::string &target)
{
	if (lifepoint <= 0 || energypoint <= 0)
		return ;
	energypoint--;
	std::cout << "ScavTrap " << name
			  << " viciously attacks " << target
			  << ", causing " << attackDamage
			  << " points of damage!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name
			  << " is now in Gate keeper mode\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor ScavTrap\n";
}