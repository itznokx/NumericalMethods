#include <iostream>
#include <vector>
#include "conversion.hpp"
using namespace std;

int main (void){
	string n1 = decimal_to_nBase(99887766,36);
	string n2 = nBase_to_decimal(n1,10); 
	cout << n1 << "\n" << n2 << "\n";
	return 0;
}