#include "bisection.hpp"
#include "falsepoint.hpp"
int main (void){
	double input;

	//std::cin >> input;std::cout << func(input) << "\n";
	//std::cout << bisection(func,0,1,pow(10,-4),0) << "\n";
	std::cout << falsepoint(func,0,1,pow(10,-4),0) << "\n";
	return 0;
}