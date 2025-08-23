/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:54:20 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/23 12:28:30 by aykrifa          ###   ########.fr       */
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

	private:
		std::string		_Name;
		int				_HitPoint;
		int				_ErnergyPoint;
		int				_AttackDamage;
}	;
