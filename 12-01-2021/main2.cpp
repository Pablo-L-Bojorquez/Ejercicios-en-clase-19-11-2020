#include <iostream>

int main()
{
	double batteryLifeInHours[3]{};
	baterryLifeInHours[0] = 2.0;
	baterryLifeInHours[1] = 3.0;
	baterryLifeInHours[2] = 4.3;
	
	std::cout<< "La duracion de la bateria es: "<<
	(baterryLifeInHours[0] + baterryLifeInHours[1] + baterryLifeInHours[2]) / 3.0 << "hora(s)\n";
	
	return 0;
}
