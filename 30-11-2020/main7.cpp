#include <iostream>
void sayHi7();
//declaraci�n de avance para la funci�n sayHi,
//hace que sayHi sea accesible en este archivo

int main() 
{
	sayHi7();
	//llamada a la funci�n definida en otro archivo,
	//el enlazador conectar� esta llamada a la definicio�n de la funcion
	return 0;
}
