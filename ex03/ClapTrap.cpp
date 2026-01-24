/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 23:38:04 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/24 22:51:22 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap():name("ClapTrap"),lifepoint(10),energypoint(10), \
					attackDamage(0)
{
	std::cout <<"ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(const std::string &_name, int _lifepoint, \
					int _energypoint, int _attackdamage)
		:name(_name),lifepoint(_lifepoint), energypoint(_energypoint), \
		attackDamage(_attackdamage)
{
	std::cout << "ClapTrap alternative constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj)
	: name(obj.name), lifepoint(obj.lifepoint),	\
	energypoint(obj.energypoint), attackDamage(obj.attackDamage)
{
	std::cout << "ClapTrap copy constructor\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		lifepoint = other.lifepoint;
		energypoint = other.energypoint;
		attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destroyed\n";
}

void ClapTrap::attack(const std::string &target)
{
	if (lifepoint <= 0 || energypoint <= 0)
		return ;
	energypoint--;
	std::cout << "ClapTrap " << name
			  << " attacks " << target
			  << ", causing " << attackDamage
			  << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (lifepoint <= 0)
		return ;
	else if (amount >= static_cast<unsigned int>(lifepoint))
		lifepoint = 0;
	else
		lifepoint -= static_cast<int>(amount);
	std::cout << name << " took " << amount << " of damage points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (lifepoint <= 0 || energypoint <= 0)
		return ;
	energypoint--;
	lifepoint += static_cast<int>(amount);
	std::cout << name << " repaired itself, gaining " << amount << " hit points "
		<< std::endl;
}

void ClapTrap::status() const 
{
	std::cout << this->name << " status: "<< std::endl;
	std::cout << "  Hit points: " << this->lifepoint << std::endl;
	std::cout << "  Energy points: " << this->energypoint << std::endl;
	std::cout << "  Attack dmg: " << this->attackDamage << std::endl;
}