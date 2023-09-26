#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "iostream"
#include <string>

//surname last name - namae first name olcak phone number sayı mı kontrolo olacak mı?
class	Contact
{
	private:
		std::string name;
		std::string surname;
		std::string nickname;
		std::string darkest_secret;
		std::string phone_number;
	public:
		Contact()
		{
			this->name = "";
			this->surname = "";
			this->nickname = "";
			this->darkest_secret = "";
			this->phone_number = "";
		}
		void	set_name(std::string name);
		void	set_surname(std::string surname);
		void	set_nickname(std::string nickname);
		void	set_darkest_secret(std::string darkest_secret);
		void	set_phone_number(std::string phone_number);
		std::string	get_name(void);
		std::string	get_surname(void);
		std::string	get_nickname(void);
		std::string	get_darkest_secret(void);
		std::string	get_phone_number(void);
};

#endif
