#include <iostream>
#include <stdlib.h> 
#include "newton_raphson.hpp"
#include "fixed_point.hpp"
double func1 (double x){
	return x-log(x);
}
double derivative_func1 (double x){
	return -log(x); 
}
double phi1 (double x){
	return x/log(x);
}
int main (void){
	//std::cin >> input;std::cout << func1(input) << "\n";std::cout<<derivative_func1(input)<<"\n";
	std::cout 	<< "Function f(a) 	= x-lnx\n";
	std::cout	<< "Derivada f'(a)	= -lnx\n";
	std::cout	<< "Phi (a)			= [lnx-1]/[lnx^2]\n";
	std::cout 	<< "\nMétodo de Newton-Raphson:-----\n"
				<< newton_raphson(func1,derivative_func1,2.5,pow(10,-4),pow(10,-4)) << "\n";

	std::cout 	<< "\nMétodo do Ponto-Fixo:---------\n"
				<< fixed_point(func1,phi1,2.5,pow(10,-4),pow(10,-4))
				<< "\n";
	return 0;
}