#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    double tri, ci, tra, q, r;

    scanf("%lf %lf %lf", &a,&b,&c);

    tri = (a*c)/2;
    ci = c*c*3.14159;
    tra = ((a+b)/2)*c;
    q = b*b;
    r = a*b;


    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", ci);
    printf("TRAPEZIO: %.3lf\n", tra);
    printf("QUADRADO: %.3lf\n", q);
    printf("RETANGULO: %.3lf\n", r);
    return 0;
}