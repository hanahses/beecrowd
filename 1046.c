#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempI, tempF, tempJ;
    scanf("%d %d", &tempI, &tempF);

    if (tempF<tempI) {
        tempJ = (24 - tempI) + tempF;
        printf("O JOGO DUROU %d HORA(S)\n", tempJ);
    }
    else {
    if (tempF == tempI)
        printf("O JOGO DUROU 24 HORA(S)\n");

    else {
        tempJ = (tempF - tempI);
        printf("O JOGO DUROU %d HORA(S)\n", tempJ);
    }
    }
    return 0;
}