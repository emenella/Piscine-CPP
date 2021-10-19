#include <iostream>
#include <fstream>

std::string	replace(std::string text, std::string s1, std::string s2)
{
	size_t i = text.find(s1, 0);
	while (i != std::string::npos)
	{
		text.erase(i, s1.size());
		text.insert(i, s2);
		i = text.find(s1, i);
	}
	return (text);
}

int main(int ac, char **gv)
{
	if (ac != 4)
	{
		std::cout << "Bad argument" << std::endl;
		return (-1);
	}
	std::ofstream replaceFile;
	std::ifstream file;
	std::string textReplace;
	std::string gv2 = gv[1];

	file.open(gv[1], std::fstream::in);
	if (file.is_open())
		textReplace.assign( (std::istreambuf_iterator<char>(file) ),(std::istreambuf_iterator<char>()    ) );
	else
	{
		std::cout << "Corrupt file" << std::endl;
		return (-1);
	}
	file.close();
	textReplace = replace(textReplace, gv[2], gv[3]);
	replaceFile.open(gv2 + ".replace");
	replaceFile << textReplace;
	replaceFile.close();
	return (0);
}
