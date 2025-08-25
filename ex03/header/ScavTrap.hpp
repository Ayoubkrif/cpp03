/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:54:20 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 03:36:13 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public	ClapTrap
{
	public:
						ScavTrap(void);											//Canonical
						ScavTrap(std::string name);								//Canonical
						~ScavTrap(void);										//Canonical
		ScavTrap		operator=(ScavTrap &rhs);								//Canonical

		void			attack(const std::string &target);
		void			guardGate(void);
}	;
