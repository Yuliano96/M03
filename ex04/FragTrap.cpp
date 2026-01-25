/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 21:44:30 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/25 12:42:51 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap():ClapTrap("FragTrap", 100, 100, 30)
{
	std::cout << "FragTrap defauld constructor called\n";	
}

FragTrap::FragTrap(const std::string &name):ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap alternative constructor called\n";
}

FragTrap::FragTrap(const FragTrap &other):ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called\n";
}


FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator called\n";
	if ( this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destroyed\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << "High five\n";
}