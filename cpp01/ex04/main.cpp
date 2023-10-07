#include "filedo.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error! Wrong Input" << std::endl;
		return (1);
	}
	filedo file_x(av[1]);
	file_x.open_file();
	file_x.copy_file(av[2], av[3]);
}
