#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include "contact.h"

class Phonebook
{
	private:
		Contact *contacts[8];
		int indexContact;

	public:
		Phonebook(/* args */);
		~Phonebook();
};
#endif