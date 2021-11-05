#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "STR_ADRESS : " << &str << std::endl
		<< "PTR_ADRESS : " << stringPTR << std::endl
		<< "REF_ADRESS : " << &stringREF << std::endl;
	std::cout << "STR : " << str << std::endl
		<< "PTR_STR : " << *stringPTR << std::endl
		<< "REF_STR : " << stringREF << std::endl;
	
}