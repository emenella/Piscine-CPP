#include "phonebook.h"

Phonebook::Phonebook()
{
	this->nbContact = 0;
	this->isContinue = 1;
	#ifdef DEBUG
	std::cout << "Phonebook create" << endl;
	#endif
}

Phonebook::~Phonebook()
{
	for (int i = 0; i < this->nbContact; i++)
		delete contacts[i];
}

void Phonebook::start()
{
	std::string input;

	while(this->isContinue)
	{
		std::cout << "commande: ";
		std::cin >> input;
		std::cout << std::endl;
		if (input == "ADD")
			this->add_contact();
		else if (input == "SEARCH")
			this->search();
		else if (input == "EXIT")
			this->isContinue = 0;
		else
			std::cout << "Unknown commmand" << std::endl;
	}
}

void Phonebook::search()
{

}

void Phonebook::add_contact()
{
	this->contacts[nbContact] = new Contact();
}

int Phonebook::get_nbContact()
{
	return(this->nbContact);
}
