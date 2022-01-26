#include <iostream>

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

int main()
{
    A a;
    B b;
    C c;

    std::cout << "Pointers :" << std::endl;
    identify(&b);
    identify(&a);
    identify(&c);

    std::cout << "References :" << std::endl;
    identify(c);
    identify(b);
    identify(a);

}