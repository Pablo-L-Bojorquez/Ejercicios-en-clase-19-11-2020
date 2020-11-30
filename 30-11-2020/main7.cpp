#include <iostream>
void sayHi7();
//declaración de avance para la función sayHi,
//hace que sayHi sea accesible en este archivo

int main() 
{
	sayHi7();
	//llamada a la función definida en otro archivo,
	//el enlazador conectará esta llamada a la definicioón de la funcion
	return 0;
}
