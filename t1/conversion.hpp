#include <iostream>
#include <cmath>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;
int returnIndex(char f,string array){
	for (int i=0;i<array.size();i++){
		if (f == array[i])
			return i;
	}
	return -1;
}
string decimal_to_nBase (int n,int base){
	if (base > 36 || base < 1){
		return "Invalid base number.\n";
	}
	string alfabeth [36] = {"0","1","2","3","4","5","6","7","8","9",
							"A","B","C","D","E","F","G","H","I","J",
							"K","L","M","N","O","P","Q","R","S","T",
							"U","V","W","X","Y","Z"};
	string final;
	if (n < 0){
		final += '-';
		n = n * (-1);
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
string nBase_to_decimal (string n,int base){
	if (base > 36 || base < 1){
		return "Invalid base number.\n";
	}
	string alfabeth = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int final;
	bool isNegative = false;
	if ( n[0] == '-'){

		isNegative = true;
		reverse(n.begin(),n.end());
		for (int i=0;i<n.length()-1;i++){
			final += (pow(base,i))*returnIndex(n[i],alfabeth);
		}
		final = final * (-1);
	}
	else {	
		reverse(n.begin(),n.end());
		for (int i=0;i<n.length();i++){
			cout << returnIndex(n[i],alfabeth) << "\n";
			final += (pow(base,i))*returnIndex(n[i],alfabeth);
		}
	}
	return to_string(final);
}
string nBase_to_yBase(string n,int basen,int basey){
	string aux = nBase_to_decimal(n,basen);
	return (decimal_to_nBase(stoi(aux),basey));
}