#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

# define MAX_CONTACT_NUMBER 8
# define CHARACTERS_WIDE 10

class PhoneBook{
	private:
		Contact contact[MAX_CONTACT_NUMBER];
		int		number_of_contacs;
		void	ft_add_new_contact(void);
	public:
		PhoneBook()
		{
			this->number_of_contacs = 0;
		}
		void	add_new_person(void);
		void 	search_person(void);
};

# endif