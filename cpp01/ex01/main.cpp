#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main()
{
	std::string name = "BOM";
	Zombie *zombie;
	int	n;

	n = 5;
	zombie = zombieHorde(n, name);
	for(int i = 0; i < n; i++)
		zombie[i].announce();
	delete[] zombie;
}
