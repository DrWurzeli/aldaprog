#include <stdlib.h>
#include "eingabe.h"

int ggT(int z1, int z2){
    if (z1 == 0){
        return z2;
    }
    while(z2 != 0){
        int z3 = z1%z2;
        z1 = z2;
        z2 = z3;
    }
    return z1;
}

int main(void){
    int zahl1 = eingabe();
    int zahl2 = eingabe();
    printf("Größter gemeinsamer Teiler: %d", ggT(zahl1, zahl2));
    return EXIT_SUCCESS;
}