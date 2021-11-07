#pragma once

# include <iostream>
# include "Animal.hpp"

class Cat: public virtual Animal
{
	public:
		Cat();
	    ~Cat(); 
		Cat(const Cat&);
	    Cat& operator=(const Cat&);
		void makeSound();
};
