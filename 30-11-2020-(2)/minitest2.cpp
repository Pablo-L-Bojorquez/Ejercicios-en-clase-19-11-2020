#include "constants.h"
#include <iostream>

int main()
{
	std::cout << "¿Cuantos Estudiantes hay en tu clase? ";
	int students{};
	std::cin>> students;
	
	if(students > constants::max_class_size)
		std::cout << "Hay muchos estudiantes en tu clase";
	else
		std::cout << "El grupo no es tan grande";
			
	return 0;
}
