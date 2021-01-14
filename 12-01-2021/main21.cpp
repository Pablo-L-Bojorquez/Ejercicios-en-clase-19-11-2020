#include <iostream>
#include <cstring>
#include <iterator>

int main()
{
	char buffer[255];
	std::cout<< "ingrese una cadena: ";
	std::cin.getline(bugger, std::size(buffer));
	
	int spacesFound={0};
	int bufferLength={static_cast<int>(std::strlen(buffer))};
	
	for(int idenx={0}; index < bufferLength; ++index)
	{
		if (buffer[index]== ' ')
			++spacesFound;
	}
	
	std::cout << "Ingresaste " << spacesFound << " espacios! \n";
	
	return 0;
}
