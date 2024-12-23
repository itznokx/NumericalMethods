#include "bisection.hpp"
#include "falsepoint.hpp"
double func1 (double x){
	return -(exp(x)/2)+2*cos(x);
}
double derivative_func1 (double x){
	return -(exp(x)/2)-2*sin(x); 
}
int main (void){
	/*double input;
	//1
	//std::cin >> input;std::cout << func1(input) << "\n";
	//std::cout << bisection(func1,0,1,pow(10,-4),0) << "\n";
	//std::cout << falsepoint(func1,0,1,pow(10,-4),0) << "\n";
	*/
	double a0,b0;
	std::cout << "Function f(a) = -(e^{a}/2)+2cos(a)\n";
	std::cout << "\nMétodo da Bisseção:----------- \n "<< bisection(func1,0,1,pow(10,-4),0) << "\n";
	std::cout << "\nMétodo da Posição Falsa:------ \n" << falsepoint(func1,0,1,pow(10,-4),0) << "\n";
	//std::cin >> input;std::cout << func1(input) << "\n";std::cout<<derivative_func1(input)<<"\n"; 
	return 0;
}