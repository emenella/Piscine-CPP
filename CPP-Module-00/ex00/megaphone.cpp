#include <iostream>

int main(int argc, char **arg)
{
	std::string	result;
	
	if (argc == 2)
		result = arg[1];
	else
		result = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::transform(result.begin(), result.end(),result.begin(), ::toupper);
	std::cout << result << std::endl;
	return (0);
}
