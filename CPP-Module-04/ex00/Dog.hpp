#pragma once

# include <iostream>
# include "Animal.hpp"

class Dog: public virtual Animal
{
	public:
		Dog();
	    ~Dog(); 
		Dog(const Dog&);
	    Dog& operator=(const Dog&);
		void makeSound();
};
