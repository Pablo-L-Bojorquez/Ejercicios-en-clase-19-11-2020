#include <iostream>

int main()
{
	int i{2};
	short s= i; // convierte de int a short
	std::cout << s << '\n';
	
	double d{0.1234};
	float f= d;
	std::cout<< f << '\n';
	return 0;
}
