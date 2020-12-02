#include <iostream>

int cout()
{
	return 5;
}

int main() 
{
	using namespace std;
	cout << "Hola Mundo...Cruel";
	// error cout es ambiguo.. no se sabe a que cout se esta referenciando debido al espacio de nombres std
	
	return 0;
}
