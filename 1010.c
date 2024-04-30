#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod1, qt1, cod2, qt2;
    double valor1, valor2, total;

    scanf("%d %d %lf", &cod1, &qt1, &valor1);
    scanf("%d %d %lf", &cod2, &qt2, &valor2);

    total = (qt1*valor1)+(qt2*valor2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
