#include "Karen.hpp"

int main(int ac, char **gv)
{
	Karen filter;
	
	if (ac == 2)
		filter.complain(gv[1]);
}