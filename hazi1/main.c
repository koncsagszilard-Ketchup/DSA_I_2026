#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"

int main(void) {

    const char elvalaszto[] = " ,";
    char nev[30];
    scanf("%[^\n]s", nev);
    char *vezeteknev = strtok(nev, elvalaszto);
    char *keresztnev = strtok(NULL, elvalaszto);

    printf("%c", szo(vezeteknev));
    printf(" %c", szo(keresztnev));
    return 0;
}