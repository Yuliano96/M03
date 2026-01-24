/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 19:14:40 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/24 19:41:55 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "=== Default constructor test ===" << std::endl;
	ClapTrap	a("CL4P-TP");
	a.status();

	std::cout << "\n=== Alternative constructor test ===" << std::endl;
	ClapTrap	b("FR4G-TP", 5, 3, 2);
	b.status();

	std::cout << "\n=== Copy constructor test ===" << std::endl;
	ClapTrap	c(b);
	c.status();

	std::cout << "\n=== Assignment operator test ===" << std::endl;
	a = b;
	a.status();

	std::cout << "\n=== Attack test ===" << std::endl;
	a.attack("Bandit");
	a.status();

	std::cout << "\n=== Take damage test ===" << std::endl;
	a.takeDamage(3);
	a.status();

	std::cout << "\n=== Repair test ===" << std::endl;
	a.beRepaired(4);
	a.status();

	std::cout << "\n=== Energy exhaustion test ===" << std::endl;
	a.attack("Target 1");
	a.attack("Target 2");
	a.attack("Target 3");
	a.status();

	std::cout << "\n=== Life depletion test ===" << std::endl;
	a.takeDamage(100);
	a.attack("Ghost");
	a.beRepaired(10);
	a.status();

	std::cout << "\n=== End of main ===" << std::endl;
	return (0);
}
