#include <iostream>
#include "Header.h"
#include "Calculator.h"




int main()
{
    Calculator c1(2.1f, 3.0f, '*'); std::cout << std::endl;
    Calculator c2(2.1, 3.0, '*');   std::cout << std::endl;
    Calculator c3(2, 3, '*');       std::cout << std::endl;

    Calculator c4(2.1f, 3.0f, '+'); std::cout << std::endl;
    Calculator c5(2.1, 3.0, '+');   std::cout << std::endl;
    Calculator c6(2, 3, '+');       std::cout << std::endl;

    Calculator c7(2.1f, 3.0f, '-'); std::cout << std::endl;
    Calculator c8(2.1, 3.0, '-');   std::cout << std::endl;
    Calculator c9(2, 3, '-');       std::cout << std::endl;

    Calculator c10(2.1f, 3.0f, '/');    std::cout << std::endl;
    Calculator c11(2.1, 3.0, '/');  std::cout << std::endl;
    Calculator c12(2, 3, '/');      std::cout << std::endl;

    Calculator c13(5, 200, '%'); std::cout << std::endl;
}
