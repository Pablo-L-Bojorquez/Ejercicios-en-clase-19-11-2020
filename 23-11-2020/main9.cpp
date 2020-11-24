#include <cmath>//std::abs
#include <algorithm>//std::max

//regresa true si la diferencia entre a y b esta dentro del porcentaje epsilon del numero mayor a y b
bool approximatelyEqual(double a, double b, double epsilon)
{
	return (std::abs(a-b) <= (std::max(std::abs(a), std::abs(b)) * epsilon));
}
