#include <iostream>

int main()
{
	std::cout << "ingrese un numero positivo: ";
	int num{};
	std::cin >> num;
	
	if (num < 0)
	{
	//se añadieron las llaves al if hasta antes del cout ya que si el numero era positivo la convertia a negativo.
	
		std::cout <<"se ingreso un numero negativo. ahora lo hacemos positivo. \n";
		num = -num; //si el num es negativo se convierte a positivo
	}	//hasta aqui
		//muestra el resultado de num si el num ingresado ya era positivo solo lo muestra si no lo convierte.
		std::cout << "tu ingresaste: " << num;
	return 0;
}
