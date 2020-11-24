#include <iostream>

int main() 
{
	std::cout<< (5 > 3 && 4 <8); // devuelve 1
	std::cout<< (4 > 6 && true); //devuelve 0
	std::cout<< (3 >= 3 || false); //devuelve 1
	std::cout<< ((true || false)? 4:); //no compila, ambas expresiones en una declaración condicional deben 
									   //coincidir o la segunda expresión debe ser convertible al tipo de la 
									   //primera expresión.
	return 0;
}
