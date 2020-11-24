#include <iostream>
#include <cmath>
#include <algorithm>

bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
double diff{ std::abs(a-b)};
if (diff <= absEpsilon)
	return true;
return (diff <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));	
}

