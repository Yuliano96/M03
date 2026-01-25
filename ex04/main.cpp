/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:18:01 by ypacileo          #+#    #+#             */
/*   Updated: 2026/01/25 14:26:05 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
    std::cout  << "\n----- Constructor calls -----" << std::endl;
	std::cout << "\nconstructor A:\n";
    DiamondTrap a1("A");
	std::cout << "\nconstructor B:\n";
    DiamondTrap b1("B");
	std::cout << "\nconstructor obj c:\n";
    DiamondTrap c;
	std::cout << "\nconstructor obj a2:\n";
    DiamondTrap a2;
	std::cout << "\ncopy constructor:\n";
    DiamondTrap b2(b1);
	std::cout << "\nconstructor by assignment:\n";
    a2 = a1;
	std::cout<<"\n=====motion======\n";
	a2.attack("traget");
	a2.whoAmI();
	std::cout << "\n======constructor calls======\n";
    FragTrap f("fragtrap");
    ScavTrap s("scavtrap");
    std::cout <<"\n====The End======\n";
  
    return 0;	
}