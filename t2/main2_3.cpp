#include <iostream>
#include "fixed_point.hpp"


double func1 (double x){
	return pow(x,3)-9*x+3;
}
double phi1 (double x){
	return (pow(x,3)/9) + (1/3);
}
int main (void){
	std::cout 	<< "Function f(a) = x^3 - 9x + 3\n";
	std::cout 	<< "Function phi: = x^3/9 + 1/3\n";
	std::cout 	<< "\nMétodo do Ponto-fixo:----- \n"
				<< fixed_point(func1,phi1,0.5,pow(10,-5),pow(10,-5))
				<< "\n";
	return 0;
}