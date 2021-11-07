#pragma once

# include <iostream>

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		const std::string getType();
		Animal& operator=(const Animal &);
		void makeSound();
};