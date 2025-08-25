/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:53:53 by aykrifa          #+#    #+#              */
/*   Updated: 2025/08/25 10:01:06 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void):	ClapTrap("Default_DiamondTrap_clap_name")
{
	ScavTrap	st;

	_Name = "Default_DiamondTrap";
	_HitPoint = ClapTrap::_HitPoint;
	_EnergyPoint = st.getEp();
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "[🔧]"
		<< "DiamondTrap " << this->_Name
		<< " has been created !"
		<< std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name):	ClapTrap(name + "_clap_name")
{
	ScavTrap	st;

	_Name = name;
	_HitPoint = ClapTrap::_HitPoint;
	_EnergyPoint = st.getEp();
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "[🔧]"
		<< "DiamondTrap " << this->_Name
		<< " has been created !"
		<< std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[💥]"
		<< "DiamondTrap " << this->_Name
		<< " has been destroyed !"
		<< std::endl;
	return ;
}

DiamondTrap		DiamondTrap::operator=(DiamondTrap &rhs)
{
	if (&rhs == this)
		return (*this);
	_Name = rhs._Name;
	ClapTrap::_Name = rhs.ClapTrap::_Name;
	_HitPoint = rhs._HitPoint;
	_EnergyPoint = rhs._EnergyPoint;
	_AttackDamage = rhs._AttackDamage;
	return (*this);
}

void			DiamondTrap::whoAmI()
{
	std::cout << "[🤓]"
		<< "DiamondTrap " << this->_Name
		<< " is made of ClapTrap " << this->ClapTrap::_Name << " !"
		<< std::endl;
	return ;
}
