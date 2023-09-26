#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string command;

	while(1)
	{
		std::cout << "Please, enter a command (ADD, SEARCH, EXIT): ";
		getline(std::cin, command);
		if (command == "ADD")
			phonebook.add_new_person();
		else if (command == "SEARCH")
			phonebook.search_person();
		else if (command == "EXIT")
			exit(1);
	}
}