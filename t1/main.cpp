#include <iostream>
#include <vector>
#include <typeinfo>
#include <type_traits>
#include "conversion.hpp"
using namespace std;

int main (void){
	string n1 = nBase_to_yBase("-8DY",36,16);
	cout << n1 << "\n";
	return 0;
}