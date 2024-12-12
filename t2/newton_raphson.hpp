#include "function.hpp"

double newton_raphson (	double (*f) (double), 
						double (*df) (double),
						double a0,
						double epsilon1
						){
	double root;
	double x0 = a0 - (f(a0)/df(a0));
	double x1 = x0 - (f(x0)/df(x0));
	int counter = 0;
	if (abs(x1) < epsilon1)
		return x1;
	while (1){
		x1 = x0 - (f(x0)/df(x0));
		if (f(x1)<epsilon1 || abs(x1-x0) < epsilon1 || counter >= MAX_ITER)
			return x1;
		x0 = x1;
		counter++;
	}
	return -404.404;
}
double newton_raphson (	double (*f) (double), 
						double (*df) (double),
						double x0,
						double epsilon1,
						double epsilon2
						){
	double root;
	double x1 = x0 - (f(x0)/df(x0));
	int counter = 0;
	if (abs(x1) < epsilon1)
		return x1;
	while (1){
		double x1 = x0 - (f(x0)/df(x0));
		if (f(x1)<epsilon1 || abs(x1-x0) < epsilon2 || counter >= MAX_ITER)
			return x1;
		x0 = x1;
		counter++;
	}
	return -404.404;
}