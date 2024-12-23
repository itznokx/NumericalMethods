#include <iostream>
#include <cmath>
#define MAX_ITER 1000
double fixed_point (double (*func) (double),
					double (*phi) (double),
					double x0,
					double episilon1,
					double episilon2){
	double root,x1;
	if (abs(func(x0))<episilon1)
		return x0;
	int iter = 0;
	double absDif,funcx1;
	while (1){
		x1 = phi(x0);
		absDif = abs(x1-x0);
		funcx1 = func(x1);
		printf("iter: %i\nx0:%.4f\nx1: %.4f\n|x1-x0|: %f\nf(x1):%.4f\n\n",iter,x0,x1,absDif,funcx1);
		if (abs(funcx1)<episilon1||absDif<episilon2||iter>=MAX_ITER){
			root = x1;
			break;
		}
		x0 = x1;
		iter++;
	}
	return root;
}