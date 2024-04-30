#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,h,m,s;

    scanf("%d", &n);

    if (n>3600) {
        h = n/3600;
        m = (n%3600)/60;
        s = n%60;
    }
    else {
        if (n>60) {
            h = 0;
            m = n/60;
            s = n%60;
        }
        else {
            h = 0;
            m = 0;
            s = n;
        }
    }
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}