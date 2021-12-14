#include "contact.h"
#define NB_ASK 5

Contact::Contact()
{
	std::string std[NB_ASK] = {
		"first name",
		"last name",
		"nickname",
		"phone number",
		"darkest secret"
	};
	std::string *this_set[NB_ASK] = {
		&this->first_name,
		&this->last_name,
		&this->nickname,
		&this->phone_number,
		&this->darkest_secret
	};
	for (int i = 0; i < NB_ASK; i++)
	{
		std::cout << std[i] << ": ";
		std::getline(std::cin, *this_set[i]);
		while (*this_set[i] == "")
		{
			std::getline(std::cin, *this_set[i]);
			std::cout << "Please type a " << std[i] << std::endl;
		}
	}
	#ifdef DEBUG
	std::cout << "Contact create" << endl;
	#endif
}

Contact::~Contact()
{
	#ifdef DEBUG
	std::cout << "Contact delete" << endl;
	#endif
}

std::string Contact::get_first_name(void)
{
	return(this->first_name);
}

std::string Contact::get_last_name(void)
{
	return(this->last_name);
}

std::string Contact::get_nickname(void)
{
	return(this->nickname);
}

std::string Contact::get_phone_number(void)
{
	return(this->phone_number);
}

std::string Contact::get_darkest_secret(void)
{
	return(this->darkest_secret);
}

void Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

