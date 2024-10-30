#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

string* decimal_to_nBase (int n,int base){
	vector<int> aux;
	while (n > base){
		aux.push_back(n%base);
		n = n/base;
	}
	aux.push_back(n);
	int x = 0;
	string* final = new string[(sizeof(aux)/sizeof(int))+1];
	for (const int& i : aux){
		final[x] = to_string(i);
	}
	return final;
}