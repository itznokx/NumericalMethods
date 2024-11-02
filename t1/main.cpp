#include <iostream>
#include <vector>
#include <typeinfo>
#include <type_traits>
#include "conversion.hpp"
using namespace std;

int main (void){
	string aux = "hype";
	string aux2 = "";
	aux2 += aux[0];
	string n1 = decimal_to_nBase(-10560,36);
	string n2 = nBase_to_decimal(n1,36);
	cout << n1 << "\n" << n2 << "\n";
	return 0;
}