#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = "" ; //buradan emin değilim
}

HumanB::~HumanB()
{
	std::cout << name << " is Destroyed" << std::endl;
}

void 	HumanB::attack()
{
	std::cout << this->weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon= weapon;
}

void	HumanB::setType(std::string type)
{
	this->weapon.setType(type);
}
