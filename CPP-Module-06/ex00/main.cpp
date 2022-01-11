#include <iostream>

char toChar(float value)
{
	return(static_cast<int>(value));
}

int toInt(float value)
{
	return(static_cast<int>(value));
}

double toDouble(float value)
{
	return(static_cast<double>(value));
}

int main(int argc, char **arg)
{
	if (argc != 2)
	{
		std::cout << "Error arg number" << std::endl;
		return (1);
	}

	float value;
	try
	{
		value = std::stof(arg[1]);
	}
	catch (std::invalid_argument &e)
	{
		(void)e;
		std::cout << "char: " << "Impossible" << std::endl;
		std::cout << "int: " << "Impossible" << std::endl;
		std::cout << "float: " << "Impossible" << std::endl;
		std::cout << "double: " << "Impossible" << std::endl;
		return (0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	char c = toChar(value);
	if (toInt(value) >= 127 || toInt(value) <= 32)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
	std::cout << "int: " << toInt(value) << std::endl;
	std::cout << "float: " << value << std::endl;
	std::cout << "double: " << toDouble(value) << std::endl;
	return (0);
}