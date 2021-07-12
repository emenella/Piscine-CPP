#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include "contact.h"

class Phonebook
{
	private:
		Contact *contacts[8];
		int nbContact;
		int isContinue;

	public:
		Phonebook();
		~Phonebook();
		void start();
		void add_contact();
		void search();
		int get_nbContact();

};
#endif