/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 21:42:57 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/24 19:40:29 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	private:
		std::string	name;
		int			lifepoint;
		int			energypoint;
		int			attackdamage;

	public:
		
		ClapTrap(const std::string &_name);
		ClapTrap(const std::string &_name, int _lifepoint, int _energypoint, int _attackdamage);
		ClapTrap(const ClapTrap &obj);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	status() const;
};

#endif
