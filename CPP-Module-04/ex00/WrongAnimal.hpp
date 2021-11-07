#pragma once

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();
		std::string &getType();
		WrongAnimal& operator=(const WrongAnimal &);
		void makeSound();
};