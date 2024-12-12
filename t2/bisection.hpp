#include <iostream>
#include <cmath>
#include "function.hpp"

#define MAX_ITER 1000
double bisection (double (*func) (double),double a,double b,double epsilon,int iter){
	double root;
	double x,fx;
	double fa = func(a);
	double fb = func(b);
	if (fa*fb > 0){
		std::cout << "Erro de isolamento entre as raizes A e B";
		return -404.404;
	}
	double intervX = abs(b-a);
	while (func(a) > epsilon){
		x = (a+b)/2;
		if (intervX <= epsilon || iter >= MAX_ITER)
			return x;
		fx = func(x);
		printf("iter: %i\na: %f\nb:%f\nx:%f\nf(x): %f\nf(a): %f\nf(b): %f\n|b-a|:%f\n\n",iter,a,b,x,fa,fb,fx,intervX);
		if (fa*fx > 0){
			a = x;
			fa = fx;
		}else{
			b = x;
			fb = x;
		}
		iter++;
		intervX = intervX/2;
	}
	root = x;
	return root;
}