/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:54:20 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 05:44:06 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : public virtual	ClapTrap
{
	public:
						FragTrap(void);											//Canonical
						FragTrap(std::string name);								//Canonical
						~FragTrap(void);										//Canonical
		FragTrap		operator=(FragTrap &rhs);								//Canonical

		void			highFivesGuys(void);
}	;
