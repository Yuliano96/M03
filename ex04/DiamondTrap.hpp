/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 23:35:45 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/25 01:28:54 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:public SvcaTrap, public FragTrap
{
	private:
	
	std::string name;

	public:
	DiamondTrap(const std::string &_name);
	~DiamondTrap();
	
};

#endif