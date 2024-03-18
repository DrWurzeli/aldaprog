#include<stdlib.h>
#include<stdio.h>

struct bruch_s{
    int zaehler;
    int nenner;
};
typedef struct bruch_s bruch;

int intEinlesen(){
    int input = -1;
    do{
        printf("Bitte eine positive Ganzzahl eingeben: ");
        if(!scanf("%d", &input)){
            scanf("%*[^/n]");
            input = -1;
            continue;
        }
    }while(input < 0);
    return input;
}

int ggT_euklid_mod(int z1, int z2){
    if (z1 == 0) return z2;
    if (z1 == z2) return 1;
    if(z2 < z1){
        int temp = z2;
        z2 = z1;
        z1 = temp;
    }
    while (z2 != 0){
        int temp = z1%z2;
        z1 = z2;
        z2 = temp;
    }
    return z1;
}

void kuerzeBruch(bruch *b, int ggT){
    b->nenner /= ggT;
    b->zaehler /= ggT;
}

void printBruch(bruch *b){
    printf("Zaehler: %d, Nenner: %d.\n", b->zaehler, b->nenner);
}

int main(void){
    bruch meinBruch;
    bruch *pMeinBruch = &meinBruch;
    meinBruch.zaehler = intEinlesen();
    meinBruch.nenner = intEinlesen();
    printBruch(pMeinBruch);

    int ggT = ggT_euklid_mod(meinBruch.zaehler, meinBruch.nenner);
    printf("Groesster gemeinsamer Teiler: %d.\n", ggT);

    kuerzeBruch(pMeinBruch, ggT);
    printBruch(pMeinBruch);

    return EXIT_SUCCESS;
}