#include <iostream>

int g_mode; //declara variable global (se inicializara en cero de forma predeterminada)

void doSomething()
{
	g_mode = 2; //establece la variable global g_mode en 2
}
int main() 
{
	g_mode = 1; //nota: esto establece la variable global g_mode en 1.!no declarar una variable local g_mode!
	
	doSomething();
	//el programador aun espera que g_mode sea 1
	//!pero doSomething lo cambio a 2!
	
	if (g_mode == 1)
		std::cout <<"no se detecto ninguna amenaza. \n";
	else
		std::cout << "lanzamiento de misiles nucleares... 3-2-1 ahora \n";
	
	return 0;
}
