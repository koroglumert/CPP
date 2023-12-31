#include "PhoneBook.hpp"

static void	ft_print_contact(Contact contact, int index)
{
	std::cout << std::setw(10) << index << "|";
	if (contact.get_first_name().length() > 10)
		std::cout << contact.get_first_name().substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << contact.get_first_name() << "|";
	if (contact.get_last_name().length() > 10)
		std::cout << contact.get_last_name().substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << contact.get_last_name() << "|";
	if (contact.get_nickname().length() > 10)
		std::cout << contact.get_nickname().substr(0, 9) << "." << std::endl;
	else
		std::cout << std::setw(10) << contact.get_nickname() << std::endl;
}

static void	ft_print_contact_details(Contact contact)
{
	std::cout << "First Name: " << contact.get_first_name() << std::endl;
	std::cout << "Last Name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_darkest_secret() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_number() << std::endl;
}

void 	PhoneBook::search_person(void)
{
	std::string input;
	int	listed_number = number_of_contacs;

	if (number_of_contacs == 0)
	{
		std::cout << "Sorry, No contact found." << std::endl;
		return ;
	}
	if (number_of_contacs >= MAX_CONTACT_NUMBER)
		listed_number = MAX_CONTACT_NUMBER;
	for(int i = 0; i < listed_number; i++)
		ft_print_contact(contact[i], i);
	std::cout << "Please, Enter a index number: ";
	getline(std::cin, input);
	if (input == "")
	{
		std::cout << "Error! Empty index" << std::endl;
		return ;
	}
	else if (isdigit(input[0]) == false)
	{
		std::cout << "Error! Input is not number" << std::endl;
		return ;
	}
	else if (std::stoi(input) < 0 || std::stoi(input) >= listed_number)
	{
		std::cout << "Error! Input can't bigger than number of contacs or lower than 0" << std::endl;
		return ;
	}
	else
		ft_print_contact_details(contact[std::stoi(input)]);
}

void	PhoneBook::add_new_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;
	int	listed_number;

	listed_number = number_of_contacs % MAX_CONTACT_NUMBER;
	std::cout << "First Name: ";
	getline(std::cin ,first_name);
	if (first_name.length() == 0)
		return ;
	std::cout << "Last Name: ";
	getline(std::cin, last_name);
	if (last_name.length() == 0)
		return ;
	std::cout << "Nickname: ";
	getline(std::cin, nickname);
	if (nickname.length() == 0)
		return ;
	std::cout << "Darkest Secret: ";
	getline(std::cin, darkest_secret);
	if (darkest_secret.length() == 0)
		return ;
	std::cout << "Phone Number: ";
	getline(std::cin, phone_number);
	if (phone_number.length() == 0)
		return ;
	contact[listed_number].set_first_name(first_name);
	contact[listed_number].set_last_name(last_name);
	contact[listed_number].set_nickname(nickname);
	contact[listed_number].set_darkest_secret(darkest_secret);
	contact[listed_number].set_phone_number(phone_number);
	number_of_contacs++;
	std::cout << "Contact Added" << std::endl; 
}
