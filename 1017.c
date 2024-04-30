#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t, v,gas;

    scanf("%f %f", &t, &v);

    gas = (t*v)/12;

    printf("%.3f\n", gas);
    return 0;
}
