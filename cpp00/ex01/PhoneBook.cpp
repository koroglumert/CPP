#include "PhoneBook.hpp"

static void	ft_print_contact(Contact contact, int index)
{
	std::cout << std::setw(10) << index << "|";
	if (contact.get_first_name().length() > 10)
		std::cout << std::setw(9) << contact.get_first_name().substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << contact.get_first_name() << "|";
	if (contact.get_last_name().length() > 10)
		std::cout << std::setw(9) << contact.get_last_name().substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << contact.get_last_name() << "|";
	if (contact.get_nickname().length() > 10)
		std::cout << std::setw(9) << contact.get_nickname().substr(0, 9) << "." << std::endl;
	else
		std::cout << std::setw(10) << contact.get_nickname() << std::endl;
}
//son satır neden kayıyor?
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

	if (this->number_of_contacs == 0)
	{
		std::cout << "Sorry, No contact found." << std::endl;
		return ;
	}
	for(int i = 0; i < this->number_of_contacs; i++)
		ft_print_contact(this->contact[i], i);
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
	else if (std::stoi(input) < 0 || std::stoi(input) >= this->number_of_contacs)
	{
		std::cout << "Error! Input can't bigger than number of contacs or lower than 0" << std::endl;
		return ;
	}
	else
		ft_print_contact_details(this->contact[std::stoi(input)]);
}

void	PhoneBook::add_new_contact()
{
	number_of_contacs %= MAX_CONTACT_NUMBER;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;

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
	this->contact[this->number_of_contacs].set_first_name(first_name);
	this->contact[this->number_of_contacs].set_last_name(last_name);
	this->contact[this->number_of_contacs].set_nickname(nickname);
	this->contact[this->number_of_contacs].set_darkest_secret(darkest_secret);
	this->contact[this->number_of_contacs].set_phone_number(phone_number);
	number_of_contacs++;
	std::cout << "Contact Added" << std::endl; 
}
