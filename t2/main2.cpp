#include "bisection.hpp"

int main (void){
	std::cout << bisection(func,0,1,pow(10,-4),0) << "\n";
	return 0;
}