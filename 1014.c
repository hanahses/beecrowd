#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;    // distancia
    float y; // consumo total

    scanf("%d %f", &x, &y);

    printf("%.3f km/l\n", x/y);

    return 0;
}