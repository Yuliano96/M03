/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:03:50 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/24 19:10:06 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main()
{

	std::cout << "\n===== Polymorphism test =====\n";
	
	ClapTrap *a = new ScavTrap("robot");
	a->attack("target");
	ScavTrap *ptr = dynamic_cast<ScavTrap *>(a);
	if (ptr != 0)
	{
		ptr->guardGate();
	}
	delete a;
	
	std::cout << "\n================================\n";
	
	ScavTrap p("robot");
	p.attack("target");
	p.takeDamage(10);
	p.guardGate();

	std::cout << "\n========== Status ==========\n";
	
	p.status();
	return (0);
}