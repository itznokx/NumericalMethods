#include <iostream>
#include <cmath>
#include <stack>
using namespace std;
int returnIndex(string f,string array[]){
	for (int i=0;i<array->size();i++){
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
string nBase_to_decimal (string n,int base){
	if (base > 36 || base < 1){
		return "Invalid base number.\n";
	}
	string alfabeth [36] = {"0","1","2","3","4","5","6","7","8","9",
							"A","B","C","D","E","F","G","H","I","J",
							"K","L","M","N","O","P","Q","R","S","T",
							"U","V","W","X","Y","Z"};
	int final;
	bool isNegative = false;
	if (to_string(n[0]) == "-"){
		isNegative = true;
		for (int i=1;i<n.length();i++){
			final += (pow(base,i-1))*returnIndex(to_string(n[i]),alfabeth);
		}
		final = final * (-1);
	}
	else {	
		for (int i=0;i<n.length();i++){
			string aux = "";
			aux += n[i];
			final += (pow(base,i))*returnIndex(aux,alfabeth);
		}
	}
	return to_string(final);
}