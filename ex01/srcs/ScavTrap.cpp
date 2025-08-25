/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:53:53 by aykrifa          #+#    #+#              */
/*   Updated: 2025/08/25 03:28:54 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void):	ClapTrap()
{

	_Name = "Default ScavTrap";
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 20;
	std::cout << "[🔧]"
		<< "ScavTrap " << this->_Name
		<< " has been created !"
		<< std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name):	ClapTrap()
{
	_Name = "Default ScavTrap";
	_Name = name;
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 20;
	std::cout << "[🔧]"
		<< "ScavTrap " << this->_Name
		<< " has been created !"
		<< std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[💥]"
		<< "ScavTrap " << this->_Name
		<< " has been destroyed !"
		<< std::endl;
	return ;
}

ScavTrap		ScavTrap::operator=(ScavTrap &rhs)
{
	if (&rhs == this)
		return (*this);
	_Name = rhs._Name;
	_HitPoint = rhs._HitPoint;
	_EnergyPoint = rhs._EnergyPoint;
	_AttackDamage = rhs._AttackDamage;
	return (*this);
}

void			ScavTrap::attack(const std::string &target)
{
	if (!this->_EnergyPoint)
	{
		std::cout << "[🪫]"
			<< "ScavTrap " << this->_Name
			<< " cannot attack, he is exhausted !"
			<< std::endl;
		return ;
	}
	this->_EnergyPoint--;
	std::cout << "[👊]"
		<< "ScavTrap " << this->_Name
		<< " attacks " << target << ", causing "
		<< this->_AttackDamage << " points of damage ! "
		<< this->_EnergyPoint << " Energy left !"
		<< std::endl;
	return ;
}
