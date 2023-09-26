#include "Contact.hpp"

void	Contact::set_name(std::string name)
{
	this->name = name;
}

void	Contact::set_surname(std::string surname)
{
	this->surname = surname;
}

void	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

void	Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

std::string	Contact::get_name(void)
{
	return (this->name);
}

std::string	Contact::get_surname(void)
{
	return (this->surname);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

std::string	Contact::get_phone_number(void)
{
	return (this->phone_number);
}
