#include <iostream>

int main()
{
	char source[]={"copia de cadena!"};
	char dest[50];
	std::strcpy(dest, source);
	std::cout << dest << '\n';
	
	return 0;
}
