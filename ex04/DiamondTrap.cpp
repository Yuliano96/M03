/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:07:57 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/25 14:12:37 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap():ClapTrap("DiamondTrap_clap_name"),ScavTrap(),FragTrap()
{
	this->name = "DiamondTrap";
	this->lifepoint = FragTrap::lifepoint;
	this->energypoint = ScavTrap::energypoint;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &_name):ClapTrap(_name + "_clap_name"),ScavTrap(),FragTrap()
{
	this->name = _name;
	this->lifepoint = FragTrap::lifepoint;
	this->energypoint = ScavTrap::energypoint;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):ClapTrap(other), ScavTrap(other), \
			FragTrap(other)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.name;
		ClapTrap::name = this->name + "_clap_name";
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamodTrap destroyed\n"<<std::endl;
}

void    DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
	std::cout << "Hello i am DiamondTrap " << this->name;
    std::cout << " and i am created from the ClapTrap " << this->ClapTrap::name << std::endl;
    if (!this->lifepoint)
        std::cout << "But now... I am dead!" << std::endl;
}