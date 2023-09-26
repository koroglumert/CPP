#include "PhoneBook.hpp"

static void	ft_print_contact(Contact contact, int index)
{
	std::cout << std::setw(CHARACTERS_WIDE) << index << "|"; //burası da 10 karakterlik geişlikte mi olmalı
	if (contact.get_name().length() > CHARACTERS_WIDE)
		std::cout << std::setw(CHARACTERS_WIDE - 1) << contact.get_name() << ".|";
	else
		std::cout << std::setw(CHARACTERS_WIDE) << contact.get_name() << "|";
	if (contact.get_surname().length() > CHARACTERS_WIDE)
		std::cout << std::setw(CHARACTERS_WIDE - 1) << contact.get_surname() << ".|";
	else
		std::cout << std::setw(CHARACTERS_WIDE) << contact.get_surname() << "|";
	if (contact.get_nickname().length() > CHARACTERS_WIDE)
		std::cout << std::setw(CHARACTERS_WIDE - 1) << contact.get_nickname() << ".|";
	else
		std::cout << std::setw(CHARACTERS_WIDE) << contact.get_nickname() << "|";
}

static void	ft_print_contact_details(Contact contact, int index)
{
	//std::cout << std::setw(CHARACTERS_WIDE) << index << "|"; //BAŞLIK İÇİN
	ft_print_contact(contact, index);
	if (contact.get_darkest_secret().length() > CHARACTERS_WIDE)
		std::cout << std::setw(CHARACTERS_WIDE - 1) << contact.get_darkest_secret() << ".|";
	else
		std::cout << std::setw(CHARACTERS_WIDE) << contact.get_darkest_secret() << "|";
	if (contact.get_phone_number().length() > CHARACTERS_WIDE)
		std::cout << std::setw(CHARACTERS_WIDE - 1) << contact.get_phone_number() << ".|" << std::endl;
	else
		std::cout << std::setw(CHARACTERS_WIDE) << contact.get_phone_number() << "|" << std::endl;
}

void 	PhoneBook::search_person(void)
{
	int	index;

	if (this->number_of_contacs == 0)
	{
		std::cout << "Sorry, No contact found." << std::endl;
		return ;
	}
	//Başlık gerekirse bu bölümde oalcal
	for(int i = 0; i < this->number_of_contacs; i++)
	{
		ft_print_contact(this->contact[i], i);
		std::cout << std::endl;
	}
	std::cout << "Please, Enter a index number: "; //tek kişi olması durumunda talep edilmeli mi?
	std::cin >> index;
	if (index >= this->number_of_contacs || index < 0) //wrong index durumunda kod tekrar istemeli mi?
	{
		std::cout << "Error! Wrong index" << std::endl;
		return ;
	}
	ft_print_contact_details(this->contact[index], index); //ilk başta bulnunan index bilgisi bulunmalı mı?, Bu bölüm bütün deatayları vermeli demi
}

void	PhoneBook::ft_add_new_contact()
{
	std::string name;
	std::string surname;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;

	std::cout << "Name: ";
	std::cin >> name;
	if (name.length() == 0)
		return ;
	std::cout << "Surname: ";
	std::cin >> surname;
	if (surname.length() == 0)
		return ;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	if (nickname.length() == 0)
		return ;
	std::cout << "Darkest Secret: ";
	std::cin >> darkest_secret;
	if (darkest_secret.length() == 0)
		return ;
	std::cout << "Phone Number: ";
	std::cin >> phone_number;
	if (phone_number.length() == 0)
		return ;
	this->contact[this->number_of_contacs - 1].set_name(name);
	this->contact[this->number_of_contacs - 1].set_surname(surname);
	this->contact[this->number_of_contacs - 1].set_nickname(nickname);
	this->contact[this->number_of_contacs - 1].set_darkest_secret(darkest_secret);
	this->contact[this->number_of_contacs - 1].set_phone_number(phone_number);
}

void	PhoneBook::add_new_person(void)
{
	if (number_of_contacs == MAX_CONTACT_NUMBER)
	{
		//ilk değeri nasıl silcem?
		delete this->contact[0];
		for(int i = 1; i <= MAX_CONTACT_NUMBER; i++)
			this->contact[i - 1] = this->contact[i];
	}
	else
		number_of_contacs++;
	this->ft_add_new_contact();
}

