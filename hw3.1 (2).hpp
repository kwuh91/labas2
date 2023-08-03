#include <stdio.h>
#include <math.h>
/*
#ifndef LABAS_HW3_1_HPP
#define LABAS_HW3_1_HPP

void TRAP(int n) {
    //1
    double h = (4.0 + 1.0) / n;
    double fa = -1 + cos(-1);
    double fb = 4 + cos(4);
    double summ = 0.0;
    for (double i = 0.0; i < n - 1; i += h) {
        summ += (i + cos(i));
    }
    double area = h + (((fa + fb) / 2) + summ);
    printf("using first formula f(x) = x + cos(x)\n");
    printf("a = -1, b = 4, n = %d, h = %lf\n", n, h);
    printf("we get an area: %lf\n\n", area);
    //2
    h = (3.0 - 1.0) / n;
    fa = tan(1 + 1) / (1 + 1);
    fb = tan(3 + 1) / (3 + 1);
    summ = 0.0;
    for (double i = 0.0; i < n - 1; i += h) {
        summ += (tan(i + 1) / (i + 1));
    }
    area = h + (((fa + fb) / 2) + summ);
    printf("using second formula f(x) = tg(x+1)/(x+1)\n");
    printf("a = 1, b = 3, n = %d, h = %lf\n", n, h);
    printf("we get an area: %lf\n\n", area);
}

#endif //LABAS_HW3_1_HPP
*/