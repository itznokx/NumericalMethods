#include <iostream>
#include <cmath>
#define MAX_ITER 1000
double newton_raphson (	double (*func) (double),
						double (*dfunc) (double),
						double x0,
						double episilon1,
						double episilon2){
	double root;
	double x1;
	if (abs(func(x0))<episilon1)
		return x0;
	int iter = 0;
	while (1){
		x1 = x0-func(x0)/dfunc(x0);
		double absDif = abs(x1-x0);
		printf("iter: %i\na(k+1):%.4f\n|a(k+1)-a(k)|: %.4f\nf(a(k+1)):%.4f\n\n",iter,x1,absDif,func(x1));
		if ((abs(func(x1))<episilon1)||(absDif<episilon2)||(iter>=MAX_ITER)){
			root = x1;
			break;
		}
		x0 = x1;
		iter++;
	}
	return root;
}