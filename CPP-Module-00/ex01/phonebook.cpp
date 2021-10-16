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
		std::cout << "command: ";
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
	std::string cmd[] = {"INDEX", "FIRST NAME", "LAST NAME", "NICKNAME"};
	
	write_lineX();
	for(int i = 0; i < 4; i++)
		std::cout <<  "| " << std::setfill(' ') << std::setw(10) << cmd[i].substr(0, 10) << " ";
	std::cout <<  "|" << std::endl;
	write_lineX();
	for(int i = 0; i < nbContact; i++)
	{
		std::cout <<  "| " << std::setfill(' ') << std::setw(10) << i;
		std::cout <<  " | " << std::setfill(' ') << std::setw(10) << contacts[i]->get_first_name().substr(0, 10);
		std::cout <<  " | " << std::setfill(' ') << std::setw(10) << contacts[i]->get_last_name().substr(0, 10);
		std::cout <<  " | " << std::setfill(' ') << std::setw(10) << contacts[i]->get_nickname().substr(0, 10) <<  " |" << std::endl;
	}
	write_lineX();
	
	int output;
	while (1)
	{
		std::cout << "Select your index : \n";
		std::cin >> output;
		if (!std::cin || output >= nbContact)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		else
			break;
	}
	std::cout << std::endl << "First name : " << contacts[output]->get_first_name() << std::endl;
	std::cout << "Last names : " << contacts[output]->get_last_name() << std::endl;
	std::cout << "Nickname : " << contacts[output]->get_nickname() << std::endl;
	std::cout << "Phone number : " << contacts[output]->get_phone_number() << std::endl;
	std::cout << "Darkest secret : " << contacts[output]->get_darkest_secret() << std::endl << std::endl;
}

void Phonebook::add_contact()
{
	if (nbContact < 8)
		this->contacts[nbContact++] = new Contact();
	else
		std::cout << "PHONEBOOK is full" << std::endl;
}

int Phonebook::get_nbContact()
{
	return(this->nbContact);
}

void write_lineX()
{
	for(int i = 0; i < 4; i++)
		std::cout << "X " << std::setfill('-') << std::setw(11) << " ";
	std::cout <<  "X" << std::endl;
}