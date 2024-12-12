#pragma once
#include <iostream>
#include <cmath>

#define MAX_ITER 10000

double func1 (double x){
	return x-x*log(x);
}
double dfunc1 (double x){
	return -log(x);
}
double func2 (double x){
	return pow(x,3)-x-1;
}
double dfunc2 (double x){
	return (3*x*x)-1;
}
double func3 (double x){
	return -(exp(x)/2)+2*cos(x);
}
double dfunc3 (double x){
	return -(exp(x)/2)-2*sin(x);
}
