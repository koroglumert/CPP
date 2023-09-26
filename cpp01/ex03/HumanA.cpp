#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
}

HumanA::~HumanA()
{
	std::cout << name << " is Destroyed" << std::endl;
}

void 	HumanA::attack()
{
	std::cout << this->weapon.getType() << std::endl;
}

void	HumanA::setType(std::string type)
{
	this->weapon.setType(type);
}
