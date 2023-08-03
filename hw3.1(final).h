#include <stdio.h>
#include <math.h>

#ifndef LABAS_HW3_1_FINAL_H
#define LABAS_HW3_1_FINAL_H

double choose_func(int option, double x){
    switch (option){
        case 1:
            return (x + cos(x));
        case 2:
            return tan(x+1)/(x+1);
        case 3:
            return (sin(x)*sin(x));
        case 4:
            return(x*x*x+6);
        case 5:
            return (cosh(x)*sinh(x));
        case 6:
            return (tan(x)+sin(x));
        case 7:
            return ((sin(x)+cos(x))*2);
        default:
            printf("Incorrect option\n");
            exit(0);
    }
}

double func(int n,double a, double b,int option){
    double sum = 0;
    double h = (b-a)/n;
    double x = 0.0;
    for (double i = 1; i < n; ++i){
        sum += choose_func(option,x);
        x += h;
    }
    return sum;
}

void TRAP(int n, double a, double b, int option){
    double h = (b-a)/n;
    double fa = choose_func(option,a);
    double fb = choose_func(option,b);
    double ans = h * ((fa+fb)/2) + func(n,a,b,option);
    printf ("An area of your function, limited by\n a = %lf and b = %lf\n with h = %lf and n = %d is:\n",a,b,(b-a)/n,n);
    printf (" %lf\n",ans);
}

#endif //LABAS_HW3_1_FINAL_H

