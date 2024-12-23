#include <iostream>
#include <stdlib.h> 
#include "newton_raphson.hpp"
#include "secant.hpp"
double func1 (double x){
	return -(exp(x)/2)+2*cos(x);
}
double derivative_func1 (double x){
	return -(exp(x)/2)-2*sin(x); 
}
int main (void){
	//std::cin >> input;std::cout << func1(input) << "\n";std::cout<<derivative_func1(input)<<"\n";
	std::cout 	<< "Function f(a) = -(e^{a}/2)+2cos(a)\n";
	std::cout 	<< "\nMétodo de Newton-Raphson:----- \n"
				<< newton_raphson(func1,derivative_func1,0.5,pow(10,-4),pow(10,-4)) << "\n";

	std::cout 	<< "\nMétodo da Secante:-------------\n"
				<< secant(func1,0.5,1.0,pow(10,-4),pow(10,-4))
				<< "\n";
	return 0;
}