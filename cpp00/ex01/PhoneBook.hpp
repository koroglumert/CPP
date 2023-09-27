#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

# define MAX_CONTACT_NUMBER 8

class PhoneBook{
	private:
		Contact contact[MAX_CONTACT_NUMBER];
		int		number_of_contacs;
	public:
		PhoneBook()
		{
			this->number_of_contacs = 0;
		}
		void	add_new_contact(void);
		void 	search_person(void);
};

# endif