/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:53:19 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/25 05:31:01 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	kevin("Kevin");

	kevin.attack("Bryan");
	kevin.beRepaired(100);
	kevin.takeDamage(110);
	kevin.takeDamage(1);
	kevin.takeDamage(1);
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.highFivesGuys();
	return 0;
}
