#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	Zombie *zombie;

	zombie = newZombie("New Zombie");
	zombie->announce();
	randomChump("Random Zombie");
	delete zombie;
}
