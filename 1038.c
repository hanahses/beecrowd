#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, q;
    float t;

    scanf("%d %d", &c, &q);

    switch (c) {
        case 1:
            t = q*4;
            break;
        case 2:
            t = q*4.5;
            break;
        case 3:
            t = q*5;
            break;
        case 4:
            t = q*2;
            break;
        case 5:
            t = q*1.5;
            break;
            }

        printf("Total: R$ %.2f\n", t);
    return 0;
}
