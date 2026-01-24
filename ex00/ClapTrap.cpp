/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 23:38:04 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/24 19:50:14 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>


ClapTrap::ClapTrap(const std::string &_name)
	: name(_name), lifepoint(10), energypoint(10), attackdamage(0)
{
	std::cout << "ClapTrap alternative constructor called:\n";
	
}

ClapTrap::ClapTrap(const std::string &_name, int _lifepoint, int _energypoint, \
		int _attackdamage):name(_name),lifepoint(_lifepoint), \
		energypoint(_energypoint),attackdamage(_attackdamage)
{
	std::cout << "alternative constructor created:\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj)
	: name(obj.name), lifepoint(obj.lifepoint),
	energypoint(obj.energypoint), attackdamage(obj.attackdamage)
{
	std::cout << "ClapTrap " << this->name << " has been copied" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		lifepoint = other.lifepoint;
		energypoint = other.energypoint;
		attackdamage = other.attackdamage;
	}
	std::cout << "ClapTrap assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (lifepoint <= 0 || energypoint <= 0)
		return ;
	energypoint--;
	std::cout << "ClapTrap " << name << " attacks " << target
		<< ", causing " << attackdamage
		<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (lifepoint <= 0)
		return ;
	if (amount >= static_cast<unsigned int>(lifepoint))
		lifepoint = 0;
	else
		lifepoint -= static_cast<int>(amount);
	std::cout << "ClapTrap " << name << " takes " << amount
		<< " points of damage, remaining hit points: "
		<< lifepoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (lifepoint <= 0 || energypoint <= 0)
		return ;
	energypoint--;
	lifepoint += static_cast<int>(amount);
	std::cout << "ClapTrap " << name << " repairs itself for "
		<< amount << " hit points, current hit points: "
		<< lifepoint << std::endl;
}

void ClapTrap::status() const 
{
	std::cout << this->name << " status: "<< std::endl;
	std::cout << "  Hit points: " << this->lifepoint << std::endl;
	std::cout << "  Energy points: " << this->energypoint << std::endl;
	std::cout << "  Attack dmg: " << this->attackdamage << std::endl;
}