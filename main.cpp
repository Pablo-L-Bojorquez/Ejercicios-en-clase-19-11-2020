#include <iostream>

bool isEven(int a)
{
	if ((a % 2)==0)
		return 1;
	else
		return 0;
}

int main() 
{
	std::cout <<"Ingrese un entero: ";
	int x{};
	std::cin >> x;
	
	int resul;
	resul = isEven(x);
	
	if (resul == 1)
		std::cout << x << " Es un Numero Par.";
	else
		std::cout << x << " Es un Numero Impar";
		
	return 0;
}
