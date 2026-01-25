/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:07:57 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/25 01:28:39 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string &_name):
		ClapTrap(_name + "_clap_name"), name(_name)
{
	//asignacion
	ClapTrap::lifepoint = FragTrap::getLifePoints();
	ClapTrap::energypoint = ScavTrap::getEnergyPoints();
	ClapTrap::attackdamage = FragTrap::getAttackDamage();

}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destroyed\n";
}