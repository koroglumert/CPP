#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "iostream"
#include <string>

class	Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		std::string phone_number;
	public:
		Contact()
		{
			this->first_name = "";
			this->last_name = "";
			this->nickname = "";
			this->darkest_secret = "";
			this->phone_number = "";
		}
		void	set_first_name(std::string first_name);
		void	set_last_name(std::string last_name);
		void	set_nickname(std::string nickname);
		void	set_darkest_secret(std::string darkest_secret);
		void	set_phone_number(std::string phone_number);
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);
		std::string	get_darkest_secret(void);
		std::string	get_phone_number(void);
};

#endif
