#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[99];
    double fixo, bonus, total;

    scanf("%s %lf %lf", &nome, &fixo, &bonus);

    total = fixo + (bonus*0.15);

    printf("TOTAL = R$ %.2lf\n",total);


    return 0;
}