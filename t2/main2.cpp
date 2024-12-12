#include "bisection.hpp"
#include "falsepoint.hpp"
#include "newton_raphson.hpp"
int main (void){
	double input;

	//std::cin >> input;std::cout << func(input) << "\n";
	//std::cout << bisection(func,0,1,pow(10,-4),0) << "\n";
	//std::cout << falsepoint(func1,0,1,pow(10,-4),0) << "\n";
	std::cout << newton_raphson(func1,dfunc1,2.5,pow(10,-6)) << "\n";
	std::cout << newton_raphson(func2,dfunc2,1.5,pow(10,-4)) << "\n";
	std::cout << newton_raphson(func3,dfunc3,0.5,pow(10,-4)) << "\n";
	return 0;
}