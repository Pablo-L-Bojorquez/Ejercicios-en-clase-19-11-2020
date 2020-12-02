#include <iostream>

void incrementAndPrint()
{
	static int s_value{1}; //se cambio de duracion automatica a estatica. el inicializador solo se ejecuta una vez
	++s_value;
	std::cout<<s_value<<'\n';
}// ahora el valor que era destruido con s_value no se destruye aqui, pero se vuelve innacesible
//porque esta fuera de alcance
int main() 
{
	incrementAndPrint(); //2. ahora: 2
	incrementAndPrint(); //2. ahora: 3
	incrementAndPrint(); //2. ahora: 4
	
	return 0;
}
