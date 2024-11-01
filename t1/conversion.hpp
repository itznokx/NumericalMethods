#include <iostream>
#include <cmath>
#include <stack>
using namespace std;

string decimal_to_nBase (int n,int base){
	if (base > 36 || base < 1){
		return "Invalid base number.\n";
	}
	string alfabeth [36] = {"0","1","2","3","4","5","6","7","8","9",
							"A","B","C","D","E","F","G","H","I","J",
							"K","L","M","N","O","P","Q","R","S","T",
							"U","V","W","X","Y","Z"};
	bool isNegative;
	string final;
	if (n > 0){
		isNegative = false;
	}
	else {
		isNegative = true;
		final += "-";
	}
	stack<int> aux;
	while (n > base){
		aux.push(n%base);
		n = n/base;
	}
	aux.push(n);
	int x = 0;
	while (!aux.empty()){
		int top = aux.top();
		if (top < 10){
			final += to_string(top);
		}
		else{
			final += alfabeth[top];
		}
		aux.pop();
	}
	return final;
}