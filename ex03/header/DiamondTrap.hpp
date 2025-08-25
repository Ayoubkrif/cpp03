/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:54:20 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 09:41:09 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public	ScavTrap, public	FragTrap
{
	public:
						DiamondTrap(void);											//Canonical
						DiamondTrap(std::string name);								//Canonical
						~DiamondTrap(void);											//Canonical
		DiamondTrap		operator=(DiamondTrap &rhs);								//Canonical

		void			whoAmI();
	
	private:
		std::string		_Name;
}	;
