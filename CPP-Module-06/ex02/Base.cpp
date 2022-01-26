#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	std::srand(std::time(NULL));
	Base *res = NULL;
	unsigned int ramdomNumber = std::rand() % 3;
	switch (ramdomNumber)
	{
		case 0:
			res = new A(); 
			break;
		case 1:
			res = new B();
			break;
		case 2:
			res = new C();
			break;
	}
	return (res);
}

void identify(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "is A !" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "is B !" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "is C !" << std::endl;
	else
		std::cout << "is nothing !" << std::endl;
	
}

void identify( Base & p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "is A !" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "is B !" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "is C !" << std::endl;
	else
		std::cout << "is nothing !" << std::endl;
}