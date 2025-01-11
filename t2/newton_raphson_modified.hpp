#include <iostream>
#include <cmath>

#define constA          1.0
#define iterMax         100000


// f(d) = a*ed – 4*d2
//f(x) here
double func (double x,double a){
   return a * std::exp(x) - 4*(x*x);
}
//g(x) = derivative of f(x)
double derivative (double x,double a){
   return a * std::exp(x) - 8*x;
}
double newtonModified(double (*f) (double, double), double (*df) (double, double), double a, double d0, double epsilon1,double epsilon2)
{   
    double Dx0 = 1 / df(d0,a);
    if (abs(f(d0,a))< epsilon1){
        return d0;
    }
    else{
        double d1;
        int k = 0;
        do
        {
            d1 = d0 - f(d0,a) * Dx0;
            
            if ((abs(f(d1,a)) < epsilon1) && (d1-d0 > epsilon2) && (k >= iterMax) )
                return d1;
            d0 = d1;
            k++;

        }while ((abs(f(d1,a)) >= epsilon1) && (d1-d0 <= epsilon2) && (k < iterMax) );
        return d1;
    }
}