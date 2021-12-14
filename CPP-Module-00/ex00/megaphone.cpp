#include <iostream>

int main(int gc, char **arg)
{
	std::string	result;
	
	if (gc < 2)
	{
		result = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << result;
	}
	else
		for (int i = 1; i < gc; i++)
		{
			result = arg[i];
			std::transform(result.begin(), result.end(),result.begin(), ::toupper);
			std::cout << result;
		}
	std::cout << std::endl;
	return (0);
}
