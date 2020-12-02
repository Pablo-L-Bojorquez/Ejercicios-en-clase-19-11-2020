#include <iostream>
int cont = 1;

bool passOrFail()
{
	if (cont <= 3)
	{
		cont +=1;
		return true;
	}
	else
		return false;
}

int main()
{
	std::cout << "Usuario #1: " << (passOrFail() ? "Verdadero" : "Falso") << '\n';
	std::cout << "Usuario #2: " << (passOrFail() ? "Verdadero" : "Falso") << '\n';
	std::cout << "Usuario #3: " << (passOrFail() ? "Verdadero" : "Falso") << '\n';
	std::cout << "Usuario #4: " << (passOrFail() ? "Verdadero" : "Falso") << '\n';
	std::cout << "Usuario #5: " << (passOrFail() ? "Verdadero" : "Falso") << '\n';
	return 0;
}
