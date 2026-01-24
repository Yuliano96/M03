/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 22:09:47 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/24 22:40:41 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
int main(void)
{
	std::cout << "====constructor=====\n";
	FragTrap fragTrap("Batman");
	std::cout << "====motion=====\n";
	fragTrap.attack("target");
	fragTrap.takeDamage(10);
	fragTrap.highFivesGuys();
	std::cout << "======constructor-copy====\n";
	FragTrap FragTrapv2(fragTrap);
	std::cout << "========status-Fragtrap=====\n";
	fragTrap.status();
	std::cout << "========status-Fragtrapv2=====\n";
	FragTrapv2.status();
	std::cout << "======The-End======\n";
	return (0);
}