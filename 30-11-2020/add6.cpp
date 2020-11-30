//esta función está declarada como estática y ahora solo se puede usar dentro de este archivo
//los intentos de acceder a él desde otro archivo a través de una declaracion de funcipon hacia adelante fallaran.
static int add2(int x, int y)
{
	return x + y;
}
