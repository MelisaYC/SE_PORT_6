#include <iostream>
#include "Math.h"

int main()
{
	std::cout <<"SUM\n"<< "1 + 2 = " << add(1, 2) << '\n';
	std::cout << "SUBSTRACT\n" << "1 - 2 = " << sub(1, 2) << '\n';
	std::cout << "MULTIPLY\n" << "1 * 2 = " << mul(1, 2) << '\n';
	std::cout << "DIVISION\n" << "1 / 2 = " << divide(4, 2) << '\n';
	std::cout << "DIVISION\n" << "1 / 2 = " << divide(6, 3) << '\n';
	system("pause");
}