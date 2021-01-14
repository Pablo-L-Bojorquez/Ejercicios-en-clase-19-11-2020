#include <iostream>
#include <string>
#include <string_view>

std::string_view askForName()
{
	std::cout << "¿cual es tu nombre? \n";
	
	std::string str{};
	std::cin >> str;
	
	std::string_view view{str};
	
	std::cout << "Hola " << view << '\n';
	
	return view;
	
	return 0;
}
int main()
{
	std::string_view view{askForName()};
	
	std::cout << "Tu Nombre es: " << view << '\n';
	
	return 0;
}
