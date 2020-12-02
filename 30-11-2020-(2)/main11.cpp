#include <iostream>

int main()
{
	int i{30000};
	char c = i; // rango chars -128 a 127
	
	std::cout << static_cast<int>(c);
	
	return 0;
}
