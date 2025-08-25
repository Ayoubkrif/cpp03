/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:54:20 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 03:18:23 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	ClapTrap
{
	public:
						ClapTrap(void);											//Canonical
						ClapTrap(std::string name);								//Canonical
						~ClapTrap(void);										//Canonical
		ClapTrap		operator=(ClapTrap &rhs);								//Canonical

		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

	protected:
		std::string		_Name;
		unsigned int	_HitPoint;
		unsigned int	_EnergyPoint;
		unsigned int	_AttackDamage;
}	;
