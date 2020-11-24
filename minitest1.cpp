#include <iostream>

int main() 
{
	std::cout << (true && true) || false;//devuelve 1
	std::cout << (false && true) || true;//devuelve 0
	std::cout << (false && true) || false || true; //devuelve 0
	std::cout << (5 > 6 || 4 > 3) && (7 > 8); //devuelve 1
	std::cout << !(7 > 6 || 3 > 4); // devuelve 0
	return 0;
}
