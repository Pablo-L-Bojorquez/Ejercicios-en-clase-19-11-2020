#include <iostream>

int initx(); // declaracion de reenvio
int inity(); //declaracion de reenvio

int g_x {initx()}; //g_x se inicializa primero
int g_y {inity()};

int initx()
{
	return g_y; //g_y no se inicializa cuando se llama a esto
}

int inity ()
{
	return 5;
}

int main()
{
	std::cout << g_x << ' ' << g_y << '\n';
	return 0;
}
