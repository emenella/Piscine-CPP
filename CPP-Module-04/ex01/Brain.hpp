#pragma once
#include <iostream>

class Brain
{
private:
	std::string *ideas;
public:
	Brain();
	Brain(const Brain&);
	~Brain();
	Brain& operator=(const Brain);
};